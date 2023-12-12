#include <algorithm>
#include <climits>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

// TreeNode structure
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

int currentPathSum(BinaryTreeNode<int> *currentPeak, int &maxSum) {
  if (currentPeak == NULL) {
    return 0;
  }

  int maxPathSumLeft = max(currentPathSum(currentPeak->left, maxSum), 0);
  int maxPathSumRight = max(currentPathSum(currentPeak->right, maxSum), 0);

  int currentSum = maxPathSumLeft + maxPathSumRight + (currentPeak->data);
  maxSum = max(currentSum, maxSum);

  return max(maxPathSumLeft, maxPathSumRight) + (currentPeak->data);
}

int maxPathSum(BinaryTreeNode<int> *root) {
  int maxSum = INT_MIN;
  currentPathSum(root, maxSum);
  return maxSum;
}

int main() {
  string input;
  getline(cin, input);

  stringstream ss(input);
  vector<int> treeValues;
  int value;
  while (ss >> value) {
    treeValues.push_back(value);
  }

  // Building the binary tree from the input values
  BinaryTreeNode<int> *root = new BinaryTreeNode<int>(treeValues[0]);
  vector<BinaryTreeNode<int> *> nodes = {root};

  int i = 1;
  while (i < treeValues.size()) {
    BinaryTreeNode<int> *current = nodes[0];
    nodes.erase(nodes.begin());

    if (treeValues[i] != -1) {
      current->left = new BinaryTreeNode<int>(treeValues[i]);
      nodes.push_back(current->left);
    }
    i++;

    if (i < treeValues.size() && treeValues[i] != -1) {
      current->right = new BinaryTreeNode<int>(treeValues[i]);
      nodes.push_back(current->right);
    }
    i++;
  }

  int result = maxPathSum(root);
  cout << result << endl;

  return 0;
}
