# Add Two Numbers As Linked Lists ll

### Problem Statement
You have been given two singly Linked Lists, where each of them represents a positive number without any leading zeros.

Your task is to add these two numbers and print the summation in the form of a linked list.

**Example:**

If the first linked list is 1 -> 2 -> 3 -> 4 -> 5 -> NULL and the second linked list is 4 -> 5 -> NULL.

The two numbers represented by these two lists are 12345 and 45, respectively. So, adding these two numbers gives 12390. 

So, the linked list representation of this number is 1 -> 2 -> 3 -> 9 -> 0 -> NULL.


### Detailed explanation

#### Input Format:
The first line of input contains an integer 'T' representing the number of test cases. 

The first line of each test case contains the elements of the first linked list separated by a single space and terminated by -1. Hence, -1 would never be a list element.

The second line of each test case contains the elements of the second linked list separated by a single space and terminated by -1. Hence, -1 would never be a list element.

#### Output Format:
For each test case, return the head of linked list after summation. The elements of the linked list must be terminated by -1.

#### Note:
You don't need to print anything, it has already been taken care of. Just implement the given function.

#### Follow-Up:
Try to solve this problem in linear time complexity and constant space complexity.

#### Constraints:
```
1 <= T <= 100
1 <= L <= 5000
0 <= data <= 9 and data != -1

Where 'L' is the number of nodes in either of the two Linked List and 'data' is the element value in a node of the linked list.

Time limit: 1 sec
```

```
Sample Input 1 :
2
1 1 -1
9 9 9 -1
2 4 -1
5 3 -1

Sample Output 1:
1 0 1 0 -1
7 7 -1

Explanation for Sample Output 1:
In test case 1, we are adding 11 and 999 to get 1010.
In test case 2, we are adding 24 and 53 to get 77.

Sample Input 2:
2
3 8 1 2 9 -1
9 8 2 9 -1
1 9 0 -1
8 1 0 -1

Sample Output 2:
4 7 9 5 8 -1
1 0 0 0 -1

Explanation for Sample Output 2:
In test case 1, we are adding 38129 and 9829 to get 47958.
In test case 2, we are adding 190 and 810 to get 1000.
```

**Complete the following C++ function:**
```c++
#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure:
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }
    };

************************************************************/

Node<int>* addTwoLists(Node<int>* first, Node<int>* second) {
    // Write your code here.
}
```


