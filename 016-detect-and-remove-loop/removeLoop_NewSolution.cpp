#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node *removeLoop(Node *head) {
    Node *slow = head;
    Node *fast = head;
    bool loopDetected = false;

    // Detect the loop using Floyd's Cycle Detection Algorithm
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            loopDetected = true;
            break;
        }
    }

    if (!loopDetected) {
        return head; // No loop found, return the original list
    }

    // Move slow to head and advance both pointers until they meet at the start of the loop
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    // Now 'slow' and 'fast' are at the start of the loop, find the last node of the loop
    while (fast->next != slow) {
        fast = fast->next;
    }

    // Break the loop by setting the next pointer of the last node in the loop to NULL
    fast->next = NULL;

    return head;
}

// Function to print the linked list
void printLinkedList(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n, k;
    cin >> n >> k;

    int val;
    Node *head = NULL;
    Node *prev = NULL;
    Node *loopNode = NULL;

    for (int i = 0; i < n; i++) {
        cin >> val;
        Node *newNode = new Node(val);

        if (i == k) {
            loopNode = newNode; // Save the kth node for loop creation
        }

        if (head == NULL) {
            head = newNode;
        } else {
            prev->next = newNode;
        }

        prev = newNode;
    }

    if (k > 0 && k <= n) {
        prev->next = loopNode; // Create the loop
    }

    head = removeLoop(head);

    // Print the linked list after removing the loop
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;

    return 0;
}

