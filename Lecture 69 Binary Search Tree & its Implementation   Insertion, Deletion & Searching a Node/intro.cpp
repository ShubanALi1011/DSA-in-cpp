#include <iostream>
#include <queue>
using namespace std;
class Node {
public:
  int data;
  Node *left;
  Node *right;

  // Constructor
  Node(int d) {
    this->data = d;
    this->right = NULL;
    this->left = NULL;
  }

  // Destructor
  ~Node() {
    if (left != NULL)
      delete left;
    if (right != NULL)
      delete right;
  }
};

// Inserting into the binary tree
Node *insertIntoBST(Node *root, int data) {
  if (root == NULL) {
    root = new Node(data);
    return root;
  }
  if (root->data < data)
    root->right = insertIntoBST(root->right, data);
  else
    root->left = insertIntoBST(root->left, data);
  return root;
}
// Building the binary tree
Node *buildTree(Node *&root) {
  int data;
  cin >> data;
  while (data != -1) {
    root = insertIntoBST(root, data);
    cin >> data;
  }
  return root;
}
void levelOrderTraversal(Node *root) {
  queue<Node *> q;
  q.push(root);
  q.push(NULL);
  while (!q.empty()) {
    Node *temp = q.front();
    q.pop();
    if (temp == NULL)
      cout << endl;
    else {
      cout << temp->data << " ";
      if (temp->left)
        q.push(temp->left);
      if (temp->right)
        q.push(temp->right);
      if (!q.empty())
        q.push(NULL);
      else
        cout << endl;
    }
  }
}
void preOrderTraversal(Node *root) {
  if (root == NULL)
    return;
  cout << root->data << " ";
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
}
void postOrderTraversal(Node *root) {
  if (root == NULL)
    return;
  postOrderTraversal(root->left);
  postOrderTraversal(root->right);
  cout << root->data << " ";
}
void inOrderTraversal(Node *root) {
  if (root == NULL)
    return;
  inOrderTraversal(root->left);
  cout << root->data << " ";
  inOrderTraversal(root->right);
}
bool isPresent(Node *root, int key) {
  if (root == NULL)
    return false;
  if (root->data == key)
    return true;
  if (root->data < key) {
    return isPresent(root->right, key);
  } else {
    return isPresent(root->left, key);
  }
}

// Delete a node from the binary tree
Node *deleteNode(Node *root, int key) {
  if (root == NULL)
    return root;
  if (root->data == key) {
    // Case 1: No child
    if (root->left == NULL && root->right == NULL) {
      delete root;
      return NULL;
    }
    // Case 2: One child
    else if (root->left == NULL && root->right != NULL) {
      Node *temp = root->right;
      delete root;
      return temp;
    } else if (root->right == NULL && root->left != NULL) {
      Node *temp = root->left;
      delete root;
      return temp;
    }
    // Case 3: Two children
    else if (root->left != NULL && root->right != NULL) {
      Node *temp = root->right;
      while (temp->left != NULL) {
        temp = temp->left;
      }
      root->data = temp->data;
      root->right = deleteNode(root->right, temp->data);
      return root;
    }

  } else if (root->data < key) {
    root->right = deleteNode(root->right, key);
  } else {
    root->left = deleteNode(root->left, key);
  }
  return root;
}
int main() {
  Node *binaryTree = NULL;
  cout << "\nEnter the data for the binary tree :-\n ";
  Node *root = buildTree(binaryTree);
  cout << "\nLevel Order Traversal of the binary tree is :-\n";
  levelOrderTraversal(root);
  cout << "\nPre Order Traversal of the binary tree is :-\n";
  preOrderTraversal(root);
  cout << "\nPost Order Traversal of the binary tree is :-\n";
  postOrderTraversal(root);
  cout << "\nIn Order Traversal of the binary tree is :-\n";
  inOrderTraversal(root);
  cout << "\nEnter the key to search in the binary tree :-\n";
  int key;
  cin >> key;
  if (isPresent(root, key)) {
    cout << "\nKey is present in the binary tree\n";
  } else {
    cout << "\nKey is not present in the binary tree\n";
  }
  cout << "\n";

  cout << "\nEnter the Another key to search in the binary tree :-\n";
  int key2;
  cin >> key2;
  if (isPresent(root, key2)) {
    cout << "\nKey2 is present in the binary tree\n";
  } else {
    cout << "\nKey2 is not present in the binary tree\n";
  }
  cout << "\n";
  cout << "\nEnter the key to delete from the binary tree :-\n";
  int key3;
  cin >> key3;
  root = deleteNode(root, key3);
  cout<<"\nIn Order Traversal of the binary tree after deletion is :-\n";
  inOrderTraversal(root);
  cout << "\n";
  return 0;
}