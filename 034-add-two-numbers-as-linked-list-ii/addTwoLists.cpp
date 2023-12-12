#include <iostream>
using namespace std;

template <typename T> class Node {
public:
  T data;
  Node *next;

  Node(T data) {
    next = nullptr;
    this->data = data;
  }
};

int countDigits(Node<int> *head) {
  int count = 0;
  while (head) {
    head = head->next;
    count++;
  }
  return count;
}

Node<int> *reverseList(Node<int> *head) {
  Node<int> *prev = nullptr;
  Node<int> *curr = head;
  Node<int> *nextNode;

  while (curr != nullptr) {
    nextNode = curr->next;

    curr->next = prev;
    prev = curr;
    curr = nextNode;
  }

  return prev;
}

Node<int> *addTwoLists(Node<int> *first, Node<int> *second) {
  first = reverseList(first);
  second = reverseList(second);

  if (countDigits(first) < countDigits(second)) {
    Node<int> *temp = first;
    first = second;
    second = temp;
  }

  int carry = 0;
  Node<int> *head = first;

  while (second != nullptr) {
    first->data += second->data + carry;
    carry = first->data / 10;
    first->data %= 10;

    if (first->next == nullptr && carry) {
      Node<int> *newNode = new Node<int>(carry);
      first->next = newNode;
      first = first->next;
      carry = 0;
      break;
    }

    first = first->next;
    second = second->next;
  }

  while (first != nullptr) {
    first->data += carry;
    carry = first->data / 10;
    first->data %= 10;

    if (first->next == nullptr && carry) {
      Node<int> *newNode = new Node<int>(carry);
      first->next = newNode;
      break;
    }

    first = first->next;
  }

  head = reverseList(head);
  return head;
}

int main() {
  int T;
  cin >> T;

  for (int t = 0; t < T; t++) {
    int data;
    Node<int> *first = nullptr;
    Node<int> *second = nullptr;

    while (cin >> data && data != -1) {
      Node<int> *newNode = new Node<int>(data);
      if (first == nullptr) {
        first = newNode;
      } else {
        Node<int> *temp = first;
        while (temp->next != nullptr) {
          temp = temp->next;
        }
        temp->next = newNode;
      }
    }

    while (cin >> data && data != -1) {
      Node<int> *newNode = new Node<int>(data);
      if (second == nullptr) {
        second = newNode;
      } else {
        Node<int> *temp = second;
        while (temp->next != nullptr) {
          temp = temp->next;
        }
        temp->next = newNode;
      }
    }

    Node<int> *result = addTwoLists(first, second);

    while (result != nullptr) {
      cout << result->data << " ";
      result = result->next;
    }
    cout << "-1" << endl;
  }

  return 0;
}
