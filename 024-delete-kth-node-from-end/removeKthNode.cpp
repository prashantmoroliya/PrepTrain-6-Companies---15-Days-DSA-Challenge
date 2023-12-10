#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node() {
    this->data = 0;
    next = nullptr;
  }
  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
  Node(int data, Node *next) {
    this->data = data;
    this->next = next;
  }
};

Node *removeKthNode(Node *head, int K) {
  Node *slow = head, *fast = head;
  while (K--)
    fast = fast->next;
  if (!fast)
    return head->next;
  while (fast->next) {
    slow = slow->next;
    fast = fast->next;
  }
  Node *deleteNode = slow->next;
  slow->next = slow->next->next;
  delete deleteNode;
  return head;
}

void printLinkedList(Node *head) {
  while (head) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}

int main() {
  int N, K;
  cin >> N >> K;

  Node *head = nullptr, *tail = nullptr;
  for (int i = 0; i < N; i++) {
    int data;
    cin >> data;
    Node *newNode = new Node(data);
    if (!head) {
      head = newNode;
      tail = newNode;
    } else {
      tail->next = newNode;
      tail = newNode;
    }
  }

  head = removeKthNode(head, K);

  if (!head) {
    cout << -1 << endl;
  } else {
    printLinkedList(head);
  }

  return 0;
}
