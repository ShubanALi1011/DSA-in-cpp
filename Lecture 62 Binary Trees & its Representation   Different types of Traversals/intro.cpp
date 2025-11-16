#include <iostream>
#include <queue>
#include <stack>
using namespace std;
class node {
public:
  int data;
  node *left;
  node *right;
  node(int d) {
    data = d;
    left = NULL;
    right = NULL;
  }
};
node *buildTree(node *root) {
  cout << "Enter the data: ";
  int d;
  cin >> d;
  root = new node(d);
  if (d == -1)
    return NULL;
  cout << "Enter data for inserting in left of " << d << endl;
  root->left = buildTree(root);
  cout << "Enter data for inserting in right of " << d << endl;
  root->right = buildTree(root);
  return root;
}
void levelOrder(node *root) {
  if (root == NULL)
    return;
  queue<node *> q;
  q.push(root);
  q.push(NULL);
  while (!q.empty()) {
    node *temp = q.front();
    if (temp != NULL) {
      cout << temp->data << " ";
    }
    q.pop();

    if (temp == NULL) { // purana level complete traverse ho chuka
      cout << endl;
      if (!q.empty()) {
        q.push(NULL);
      }
    } else {
      if (temp->left != NULL) {
        q.push(temp->left);
      }
      if (temp->right != NULL) {
        q.push(temp->right);
      }
    }
  }
}
void reverseLevelOrder(node *root) {
    if (root == NULL)
        return;

    queue<node *> q;
    stack<int> s; // data store karne ke liye

    q.push(root);

    while (!q.empty()) {
        node *temp = q.front();
        q.pop();

        s.push(temp->data);

        // Pehle right child push karo, phir left
        if (temp->right)
            q.push(temp->right);
        if (temp->left)
            q.push(temp->left);
    }

    // Stack se pop karke print karo
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}

void inorder(node *root) {
  if (root == NULL)
    return;
  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}
void preorder(node *root) {
  if (root == NULL)
    return;
  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}
void postorder(node *root) {
  if (root == NULL)
    return;
  postorder(root->left);
  postorder(root->right);
  cout << root->data << " ";
}
node *buildFromLevelOrder(node *root) {
  queue<node *> q;
  cout << "Enter data for root: ";
  int data;
  cin >> data;

  root = new node(data);
  q.push(root);

  while (!q.empty()) {
    node *temp = q.front();
    q.pop();

    cout << "Enter left node for: " << temp->data << endl;
    int leftData;
    cin >> leftData;
    if (leftData != -1) {
      temp->left = new node(leftData);
      q.push(temp->left);
    }

    cout << "Enter right node for: " << temp->data << endl;
    int rightData;
    cin >> rightData;
    if (rightData != -1) {
      temp->right = new node(rightData);
      q.push(temp->right);
    }
  }

  return root; // loop ke baahar
} // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
void inorderIterative(node *root) {
    stack<node*> st;
    node* curr = root;

    while (curr != NULL || !st.empty()) {
        while (curr != NULL) { // leftmost tak jao
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout << curr->data << " "; // visit
        curr = curr->right;
    }
}
void preorderIterative(node *root) {
    if (root == NULL) return;

    stack<node*> st;
    st.push(root);

    while (!st.empty()) {
        node* curr = st.top();
        st.pop();

        cout << curr->data << " "; // visit

        // Pehle right push karo, taake left pehle process ho
        if (curr->right)
            st.push(curr->right);
        if (curr->left)
            st.push(curr->left);
    }
}
void postorderIterative(node *root) {
    if (root == NULL) return;

    stack<node*> st1, st2;
    st1.push(root);

    while (!st1.empty()) {
        node* curr = st1.top();
        st1.pop();
        st2.push(curr);

        if (curr->left)
            st1.push(curr->left);
        if (curr->right)
            st1.push(curr->right);
    }

    while (!st2.empty()) {
        cout << st2.top()->data << " ";
        st2.pop();
    }
}
int main() {
  node *root = NULL;
  root = buildTree(root);
  // Level Order Traversal
  cout << "Level Order Traversal:-\n ";
  levelOrder(root);
  cout << endl;
  // Reverse Level Order Traversal
  cout << "Reverse Level Order Traversal:-\n ";
  reverseLevelOrder(root);
  cout << endl;
  // Inorder Traversal
  cout << "Inorder Traversal:-\n ";
  inorder(root);
  cout << endl;
  // Preorder Traversal
  cout << "Preorder Traversal:-\n ";
  preorder(root);
  cout << endl;
  // Postorder Traversal
  cout << "Postorder Traversal:-\n ";
  postorder(root);
  cout << endl;
  // 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
  node *root1 = NULL;
  root1 = buildFromLevelOrder(root1);
  levelOrder(root1);
  cout << endl;
  return 0;
}