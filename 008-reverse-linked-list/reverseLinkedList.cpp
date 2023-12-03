#include <bits/stdc++.h>

// ignore this...
template <typename T>
class LinkedListNode {
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode(T data) {
        this->data = data;
        this->next = NULL;
    }
};

//copy from this only...
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *prev = nullptr;
    LinkedListNode<int> *current = head;
    LinkedListNode<int> *next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev; // new head of the reversed list
}


// ignore this...
// Function to print the linked list for testing purposes
template <typename T>
void printLinkedList(LinkedListNode<T> *head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << "-1" << std::endl;
}

// ignore this...
int main() {
    LinkedListNode<int> *head = new LinkedListNode<int>(1);
    head->next = new LinkedListNode<int>(2);
    head->next->next = new LinkedListNode<int>(3);
    head->next->next->next = new LinkedListNode<int>(4);
    head->next->next->next->next = nullptr;

    std::cout << "Original Linked List: ";
    printLinkedList(head);

    LinkedListNode<int> *reversedHead = reverseLinkedList(head);

    std::cout << "Reversed Linked List: ";
    printLinkedList(reversedHead);

    return 0;
}

