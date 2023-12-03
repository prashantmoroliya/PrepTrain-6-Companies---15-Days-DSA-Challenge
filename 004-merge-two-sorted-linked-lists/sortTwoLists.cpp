#include <iostream>
#include <sstream>
#include <vector>

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

Node<int>* sort(Node<int>* first, Node<int>* second) {
    // When only one node is in the first list, point its head to the second list
    if (first->next == NULL) {
        first->next = second;
        return first;
    }

    Node<int>* cur1 = first, *next1 = first->next;
    Node<int>* cur2 = second, *next2 = second->next;

    while (next1 && cur2) {
        if ((cur2->data) >= (cur1->data) && (cur2->data) <= (next1->data)) { 
            next2 = cur2->next; 
            cur1->next = cur2; 
            cur2->next = next1; 
  
            // Let cur1 and cur2 point to their immediate next pointers 
            cur1 = cur2; 
            cur2 = next2; 
        } else { 
            // If there are more nodes in the first list 
            if (next1->next) { 
                next1 = next1->next; 
                cur1 = cur1->next; 
            } else { 
                // Point the last node of the first list to the remaining nodes of the second list 
                next1->next = cur2; 
                return first; 
            } 
        } 
    }

    return first;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second) {
    if (!first) {
        return second;
    }
    if (!second) {
        return first;
    }

    if ((first->data) < (second->data)) {
        return sort(first, second);
    } else {
        return sort(second, first);
    }
}

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

