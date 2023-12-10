#include <iostream>
#include <unordered_set>

using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node() {
    this->data = 0;
    next = NULL;
  }
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
  Node(int data, Node *next) {
    this->data = data;
    this->next = next;
  }
};

int length(Node *head) {
  int len = 0;
  Node *temp = head;
  while (temp != nullptr) {
    temp = temp->next;
    len++;
  }
  return len;
}

Node *findIntersection(Node *firstHead, Node *secondHead) {
  int firstListLength = length(firstHead);
  int secondListLength = length(secondHead);

  while (firstListLength > secondListLength) {
    firstHead = firstHead->next;
    firstListLength--;
  }

  while (firstListLength < secondListLength) {
    secondHead = secondHead->next;
    secondListLength--;
  }

  while (firstHead != secondHead) {
    firstHead = firstHead->next;
    secondHead = secondHead->next;
  }

  return firstHead;
}

Node *createLinkedList(int arr[]) {
  Node *head = nullptr, *temp = nullptr;
  for (int i = 0; arr[i] != -1; i++) {
    Node *newNode = new Node(arr[i]);
    if (!head) {
      head = newNode;
      temp = newNode;
    } else {
      temp->next = newNode;
      temp = temp->next;
    }
  }
  return head;
}

int main() {
  int arr1[] = {4, 1, -1};
  int arr2[] = {5, 6, -1};
  int arr3[] = {8, -1};

  Node *head1 = createLinkedList(arr1);
  Node *head2 = createLinkedList(arr2);
  Node *head3 = createLinkedList(arr3);

  Node *temp = head1;
  while (temp->next != nullptr) {
    temp = temp->next;
  }
  temp->next = head3;

  temp = head2;
  while (temp->next != nullptr) {
    temp = temp->next;
  }
  temp->next = head3;

  Node *intersection = findIntersection(head1, head2);

  if (intersection)
    cout << intersection->data << endl;
  else
    cout << "-1" << endl;

  return 0;
}
