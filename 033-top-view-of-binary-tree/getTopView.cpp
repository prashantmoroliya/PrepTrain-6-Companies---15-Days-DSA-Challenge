#include <iostream>
#include <map>   // import this
#include <queue> // and import this
#include <sstream>
#include <vector>
using namespace std;

template <typename T> class TreeNode {
public:
  T data;
  TreeNode<T> *left;
  TreeNode<T> *right;

  TreeNode(T dat) {
    this->data = dat;
    left = NULL;
    right = NULL;
  }
};

// Function to create a binary tree from the input string
TreeNode<int> *createTree(const string &input) {
  istringstream iss(input);
  string token;
  queue<TreeNode<int> *> nodes;
  getline(iss, token, ' ');
  TreeNode<int> *root = new TreeNode<int>(stoi(token));
  nodes.push(root);

  while (getline(iss, token, ' ')) {
    TreeNode<int> *parent = nodes.front();
    nodes.pop();

    if (token != "-1") {
      parent->left = new TreeNode<int>(stoi(token));
      nodes.push(parent->left);
    }

    if (getline(iss, token, ' ') && token != "-1") {
      parent->right = new TreeNode<int>(stoi(token));
      nodes.push(parent->right);
    }
  }
  return root;
}

// only copy this function...
vector<int> getTopView(TreeNode<int> *root) {
  vector<int> topView;
  map<int, int> visited;

  if (root == nullptr)
    return topView;

  queue<pair<TreeNode<int> *, int>> level;
  level.push({root, 0});

  while (level.size() != 0) {
    int levelSize = level.size();

    while (levelSize != 0) {
      pair<TreeNode<int> *, int> curr = level.front();
      level.pop();

      int hrDistance = curr.second;

      TreeNode<int> *currNode = curr.first;

      if (visited.count(hrDistance) == 0)
        visited.insert({hrDistance, currNode->data});

      if (currNode->left != nullptr)
        level.push({currNode->left, hrDistance - 1});
      if (currNode->right != nullptr)
        level.push({currNode->right, hrDistance + 1});

      levelSize--;
    }
  }

  for (auto x : visited)
    topView.push_back(x.second);

  return topView;
}

int main() {
  string input;
  cout << "Enter elements in level order format for the binary tree: ";
  getline(cin, input);

  TreeNode<int> *root = createTree(input);

  vector<int> result = getTopView(root);

  cout << "Top View: ";
  for (auto val : result) {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}
