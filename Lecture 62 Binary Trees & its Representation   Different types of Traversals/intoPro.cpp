#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

// Binary Tree class
class Tree {
public:
    Node* root;

    Tree() {
        root = nullptr;
    }

    // Build tree by taking user input 
    void buildTreeHelper(Node*& root) {
        int val;
        cout << "Enter node value (-1 for NULL): ";
        cin >> val;
        if (val == -1) {
            return;
        }

        root = new Node(val);
        cout << "Insert left child of " << val << endl;
        buildTreeHelper(root->left);
        cout << "Insert right child of " << val << endl;
        buildTreeHelper(root->right);
    }

    void buildTree() {
        buildTreeHelper(root);
    }

    // Inorder Traversal
    void inorder(Node* node) {
        if(node == nullptr)
            return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    // Preorder Traversal
    void preorder(Node* node) {
        if (node == nullptr) 
            return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    // Postorder Traversal
    void postorder(Node* node) {
        if (node == nullptr) 
            return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }
};

int main() {
    Tree t;
    t.buildTree();

    cout << "Inorder traversal: ";
    t.inorder(t.root);
    cout << endl;

    cout << "Preorder traversal: ";
    t.preorder(t.root);
    cout << endl;

    cout << "Postorder traversal: ";
    t.postorder(t.root);
    cout << endl;

    return 0;
}
