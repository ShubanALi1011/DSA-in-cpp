#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this->data = data;
            this->left = nullptr;
            this->right = nullptr;
        }
};
class Tree{
    private:
        void createMapping(vector<int>& inorder, unordered_map<int, int>& map){
            for(int i=0; i<inorder.size(); i++){
                map[inorder[i]] = i;
            }
        }

        Node* solve(vector<int>& inorder, vector<int>& preorder, int& preIndex, int inStart, int inEnd, int n, unordered_map<int, int>& map ){
            // base case
            if(preIndex >= n || inStart > inEnd){
                return nullptr;
            }

            int element = preorder[preIndex];
            preIndex++;
            Node* root = new Node(element);

            int pos = map[element];

            // recusive call
            root->left = solve(inorder, preorder, preIndex, inStart, pos-1, n, map);
            root->right = solve(inorder, preorder, preIndex, pos+1, inEnd, n, map);

            return root;
        }
    public:
        Node* BuildTree(vector<int>& preorder, vector<int>& inorder){
            int n = inorder.size();
            int preIndex = 0;
            unordered_map<int, int> map;

            createMapping(inorder,map);
            Node* ans =  solve(inorder, preorder, preIndex, 0, inorder.size() - 1, n, map);
            return ans;

        }
};
void inorderPrint(Node* root){
    if(root == nullptr)
        return;
    inorderPrint(root->left);
    cout<<root->data<<"  ";
    inorderPrint(root->right);
}
int main(){
    vector<int> inorder = {1, 3, 5, 6, 7, 4, 8, 10, 12, 15, 18};
    vector<int> preorder = {10, 5, 3, 1, 7, 6, 8, 4, 15, 12, 18};
    Tree t;
    Node* root = t.BuildTree(preorder, inorder);
    cout<<"Vector Inorder : ";
    for(auto i:inorder){
        cout<<i<<"  ";
    }
    cout<<endl;
    cout<<"Tree Inorder  :  ";
    inorderPrint(root);
    return 0;
}