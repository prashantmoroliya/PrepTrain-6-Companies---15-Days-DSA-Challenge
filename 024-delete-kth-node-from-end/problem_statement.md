# Delete Kth Node From End

### Problem Statement

You have been given a singly Linked List of 'N' nodes with integer data and an integer 'K'.

Your task is to remove the 'K'th node from the end of the given Linked List and return the head of the modified linked list.

**Example:**
Input : 1 -> 2 -> 3 -> 4 -> 'NULL'  and  'K' = 2 <br>
Output: 1 -> 2 -> 4 -> 'NULL' <br>
Explanation: <br>
After removing the second node from the end, the linked list become 1 -> 2 -> 4 -> 'NULL'. <br>
[![untitled-7-27708.jpg](https://i.postimg.cc/MT4VM1bx/untitled-7-27708.jpg)](https://postimg.cc/R67N26Db) <br>

### Detailed explanation:

#### Input Format:
The first line contains an integer 'N', the size of the linked list and an integer 'K'. 
The second line contains 'N' space-separated integers.

#### Output Format:
The output contains the linked list after deletion. If the list is empty, -1 is printed.

#### Note:
You do not need to print anything, it has already been taken care of. Just implement the given function.

#### Follow Up:
Can you solve this without finding the length of the linked list and using O(1) extra space?

```
Sample Input 1 :
6 3
1 2 3 4 5 6 

Sample Output 1 :
1 2 3 5 6

Explanation for Sample Input 1:
In the given linked list the node with data ‘4’ will be removed as this is the 3rd node from the end of the Linked List.

Sample Input 2 :
3 3
1 2 3

Sample Output 2 :
2 3

Constraints :
1 <= 'N' <= 10^3
1 <= 'K' <= 'N'
1 <= 'data' <= 10^3

Time Limit: 1 sec.
```

**Complete the following C++ function:**
```c++
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K) {
    // Write your code here.
}
```


