#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// ignore this class
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

// only copy this function;
vector<int> printRightView(BinaryTreeNode<int> *root) {
  vector<int> ans;

  if (root == nullptr) {
    return {};
  }

  queue<BinaryTreeNode<int> *> q;
  q.push(root);

  while (!q.empty()) {
    int n = q.size();

    for (int i = 1; i <= n; i++) {
      BinaryTreeNode<int> *temp = q.front();
      q.pop();

      if (i == n) {
        ans.push_back(temp->data);
      }

      if (temp->left != nullptr) {
        q.push(temp->left);
      }

      if (temp->right != nullptr) {
        q.push(temp->right);
      }
    }
  }

  return ans;
}

// ignore this function;
int main() {
  int t;
  cin >> t;

  while (t--) {
    string levelOrder;
    cin.ignore();
    getline(cin, levelOrder);

    BinaryTreeNode<int> *root = nullptr;

    if (levelOrder != "-1") {
      vector<int> elements;
      int start = 0;
      int end = levelOrder.find(" ");
      while (end != string::npos) {
        string str = levelOrder.substr(start, end - start);
        if (str == "N") {
          elements.push_back(-1);
        } else {
          elements.push_back(stoi(str));
        }
        start = end + 1;
        end = levelOrder.find(" ", start);
      }

      if (start < levelOrder.length()) {
        string str = levelOrder.substr(start);
        if (str == "N") {
          elements.push_back(-1);
        } else {
          elements.push_back(stoi(str));
        }
      }

      root = new BinaryTreeNode<int>(elements[0]);
      queue<BinaryTreeNode<int> *> pendingNodes;
      pendingNodes.push(root);

      int index = 1;
      while (!pendingNodes.empty() && index < elements.size()) {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();

        int leftChild = elements[index];
        int rightChild =
            (index + 1 < elements.size()) ? elements[index + 1] : -1;

        if (leftChild != -1) {
          BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
          front->left = leftNode;
          pendingNodes.push(leftNode);
        }

        if (rightChild != -1) {
          BinaryTreeNode<int> *rightNode = new BinaryTreeNode<int>(rightChild);
          front->right = rightNode;
          pendingNodes.push(rightNode);
        }

        index += 2;
      }
    }

    vector<int> result = printRightView(root);
    for (int i = 0; i < result.size(); i++) {
      cout << result[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
