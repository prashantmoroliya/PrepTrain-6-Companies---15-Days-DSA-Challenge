#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(T data) {
        next = nullptr;
        this->data = data;
    }

    ~Node() {
        if (next != nullptr) {
            delete next;
        }
    }
};

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Base cases
    if (first == NULL) {
        return second;
    } else if (second == NULL) {
        return first;
    }

    // Start with the linked list whose head data is the least
    if (first->data < second->data) {
        first->next = sortTwoLists(first->next, second);
        return first;
    } else {
        second->next = sortTwoLists(first, second->next);
        return second;
    }
}

//ignore this..
int main() {
    string input1, input2;

    while (getline(cin, input1) && getline(cin, input2)) {
        istringstream stream1(input1);
        istringstream stream2(input2);

        Node<int>* first = nullptr;
        Node<int>* second = nullptr;

        int val;
        while (stream1 >> val && val != -1) {
            if (first == nullptr) {
                first = new Node<int>(val);
            } else {
                Node<int>* temp = first;
                while (temp->next != nullptr) {
                    temp = temp->next;
                }
                temp->next = new Node<int>(val);
            }
        }

        while (stream2 >> val && val != -1) {
            if (second == nullptr) {
                second = new Node<int>(val);
            } else {
                Node<int>* temp = second;
                while (temp->next != nullptr) {
                    temp = temp->next;
                }
                temp->next = new Node<int>(val);
            }
        }

        Node<int>* mergedList = sortTwoLists(first, second);

        Node<int>* temp = mergedList;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "-1" << endl;

        delete mergedList;

        // Exit the program after processing one test case
        break;
    }

    return 0;
}
