#include <iostream>
#include <unordered_set>
using namespace std;

// ignore this...
class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// copy this function...
int countNodesInLoop(Node *loopNode) {
    int count = 1;
    Node *temp = loopNode;

    while (temp->next != loopNode) {
        count++;
        temp = temp->next;
    }

    return count;
}

// copy this function...
Node *detectLoop(Node *head) {
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return slow; // Loop detected, return the meeting point
        }
    }

    return NULL; // No loop detected
}

// this function you have to complete....
Node *removeLoop(Node *head) {
    Node *meetingPoint = detectLoop(head);

    if (meetingPoint == NULL) {
        return head; // No loop, return the original list
    }

    Node *ptr1 = head;
    Node *ptr2 = meetingPoint;

    // Move ptr2 'loopLength' nodes ahead
    int loopLength = countNodesInLoop(meetingPoint);

    for (int i = 0; i < loopLength; i++) {
        ptr2 = ptr2->next;
    }

    // Move both pointers until they meet at the start of the loop
    while (ptr1 != ptr2) {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    // Find the last node of the loop and set its next to NULL
    while (ptr2->next != ptr1) {
        ptr2 = ptr2->next;
    }
    ptr2->next = NULL;

    return head;
}


// ignore this function...
// Function to print the linked list
void printLinkedList(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

//ignore this function...
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


