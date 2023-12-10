#include <iostream>
#include <queue>
#include <sstream>
#include <vector>

using namespace std;

template <typename T> class BinaryTreeNode {
public:
  T val;
  BinaryTreeNode<T> *left;
  BinaryTreeNode<T> *right;

  BinaryTreeNode(T val) {
    this->val = val;
    left = NULL;
    right = NULL;
  }
};

vector<int> getLevelOrder(BinaryTreeNode<int> *root) {
  vector<int> output;

  if (root == NULL) {
    return output;
  }

  queue<BinaryTreeNode<int> *> level;
  level.push(root);

  while (!level.empty()) {
    int levelSize = level.size();

    while (levelSize != 0) {
      BinaryTreeNode<int> *curr = level.front();
      level.pop();
      output.push_back(curr->val);

      if (curr->left != nullptr) {
        level.push(curr->left);
      }

      if (curr->right != nullptr) {
        level.push(curr->right);
      }
      levelSize--;
    }
  }

  return output;
}

int main() {
  int t;
  cin >> t;
  cin.ignore(); // ignore the endline after reading t

  while (t--) {
    string line;
    getline(cin, line);

    vector<int> values;
    istringstream iss(line);
    string val;
    while (iss >> val) {
      if (val != "-1") {
        values.push_back(stoi(val));
      }
    }

    BinaryTreeNode<int> *root = NULL;
    queue<BinaryTreeNode<int> *> q;

    int i = 0;
    root = new BinaryTreeNode<int>(values[i++]);
    q.push(root);

    while (!q.empty()) {
      BinaryTreeNode<int> *temp = q.front();
      q.pop();

      if (i < values.size()) {
        if (values[i] != -1) {
          temp->left = new BinaryTreeNode<int>(values[i]);
          q.push(temp->left);
        }
        i++;
      }

      if (i < values.size()) {
        if (values[i] != -1) {
          temp->right = new BinaryTreeNode<int>(values[i]);
          q.push(temp->right);
        }
        i++;
      }
    }

    vector<int> levelOrder = getLevelOrder(root);

    for (int i = 0; i < levelOrder.size(); i++) {
      cout << levelOrder[i] << " ";
    }
    cout << endl;
  }

  return 0;
}

