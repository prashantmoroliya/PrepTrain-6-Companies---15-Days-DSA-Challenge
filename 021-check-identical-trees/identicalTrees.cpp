#include <iostream>
#include <queue>
#include <sstream>
using namespace std;

// ignore this...
template <typename T> class BinaryTreeNode {
public:
  T data;
  BinaryTreeNode<T> *left;
  BinaryTreeNode<T> *right;

  BinaryTreeNode(T data) {
    this->data = data;
    left = NULL;
    right = NULL;
  }
};

// ignore this function...
BinaryTreeNode<int> *buildTreeFromInput(const string &input) {
  istringstream iss(input);
  queue<BinaryTreeNode<int> *> q;
  string val;
  iss >> val;

  BinaryTreeNode<int> *root = new BinaryTreeNode<int>(stoi(val));
  q.push(root);

  while (!q.empty()) {
    BinaryTreeNode<int> *currNode = q.front();
    q.pop();

    if (!(iss >> val))
      break;

    if (val != "-1") {
      currNode->left = new BinaryTreeNode<int>(stoi(val));
      q.push(currNode->left);
    }

    if (!(iss >> val))
      break;

    if (val != "-1") {
      currNode->right = new BinaryTreeNode<int>(stoi(val));
      q.push(currNode->right);
    }
  }

  return root;
}

// copy this function only...
bool identicalTrees(BinaryTreeNode<int> *root1, BinaryTreeNode<int> *root2) {
  if (root1 == NULL || root2 == NULL) {
    if (root1 == NULL && root2 == NULL)
      return true;
    return false;
  }

  if (root1->data != root2->data)
    return false;

  return (identicalTrees(root1->left, root2->left) &&
          identicalTrees(root1->right, root2->right));
}

// ignore this main() function...
int main() {
  cout << "Enter level order traversal for first tree (separated by space, -1 "
          "for null nodes):\n";
  string input1;
  getline(cin, input1);

  cout << "Enter level order traversal for second tree (separated by space, -1 "
          "for null nodes):\n";
  string input2;
  getline(cin, input2);

  // Build trees from user input
  BinaryTreeNode<int> *root1 = buildTreeFromInput(input1);
  BinaryTreeNode<int> *root2 = buildTreeFromInput(input2);

  // Check if trees are identical using provided function
  if (identicalTrees(root1, root2)) {
    cout << "True\n";
  } else {
    cout << "False\n";
  }

  return 0;
}
