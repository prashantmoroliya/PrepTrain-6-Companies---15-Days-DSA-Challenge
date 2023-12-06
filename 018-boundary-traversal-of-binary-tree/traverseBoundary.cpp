#include <iostream>
#include <vector>
#include <stack>  // add this header file bcz stack is STL and STL must be included to use them... you can ignore other header files..
#include <queue>
#include <sstream>
using namespace std;

// ignore this class
template <typename T>
class TreeNode {
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }

    ~TreeNode() {
        if(left)
            delete left;
        if(right)
            delete right;
    }
};

// ignore this function...
TreeNode<int>* createTree(const vector<int> &nodes) {
    if (nodes.empty()) return nullptr;

    TreeNode<int> *root = new TreeNode<int>(nodes[0]);
    queue<TreeNode<int>*> nodeQueue;
    nodeQueue.push(root);

    size_t i = 1;
    while (i < nodes.size()) {
        TreeNode<int> *currNode = nodeQueue.front();
        nodeQueue.pop();

        int leftVal = nodes[i++];
        if (leftVal != -1) {
            currNode->left = new TreeNode<int>(leftVal);
            nodeQueue.push(currNode->left);
        }

        if (i < nodes.size()) {
            int rightVal = nodes[i++];
            if (rightVal != -1) {
                currNode->right = new TreeNode<int>(rightVal);
                nodeQueue.push(currNode->right);
            }
        }
    }

    return root;
}

// copy this function...
void addLeftBoundary(TreeNode<int> *root, vector<int> &result) {
    while (root) {
        if (root->left || root->right) {
            result.push_back(root->data);
        }
        if (root->left) {
            root = root->left;
        } else {
            root = root->right;
        }
    }
}

// copy this function...
void addLeaves(TreeNode<int> *root, vector<int> &result) {
    if (!root) return;

    if (!root->left && !root->right) {
        result.push_back(root->data);
        return;
    }

    addLeaves(root->left, result);
    addLeaves(root->right, result);
}

// copy this function...
void addRightBoundary(TreeNode<int> *root, vector<int> &result) {
    stack<int> st;
    while (root) {
        if (root->left || root->right) {
            st.push(root->data);
        }
        if (root->right) {
            root = root->right;
        } else {
            root = root->left;
        }
    }

    while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }
}

// copy this function...
vector<int> traverseBoundary(TreeNode<int> *root) {
    vector<int> result;

    if (!root) return result;

    result.push_back(root->data);

    addLeftBoundary(root->left, result);
    addLeaves(root, result);
    addRightBoundary(root->right, result);

    return result;
}


// ignore this function....
int main() {
    string input;
    cout << "Enter nodes of the binary tree separated by spaces (-1 for null nodes): ";
    getline(cin, input);
    istringstream iss(input);

    vector<int> nodes;
    int val;
    while (iss >> val) {
        nodes.push_back(val);
    }

    TreeNode<int> *root = createTree(nodes);

    vector<int> boundary = traverseBoundary(root);

    cout << "Boundary Nodes: ";
    for (int node : boundary) {
        cout << node << " ";
    }
    cout << endl;

    delete root;

    return 0;
}

