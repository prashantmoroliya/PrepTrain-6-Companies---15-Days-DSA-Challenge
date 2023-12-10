# Intersection of Two Linekd Lists

### Problem Statement
You are given two Singly Linked Lists of integers, which may have an intersection point.

Your task is to return the first intersection node. If there is no intersection, return NULL.

**Example:-**
The Linked Lists, where a1, a2, c1, c2, c3 is the first linked list and b1, b2, b3, c1, c2, c3 is the second linked list, merging at node c1.

[![ex1-27806.png](https://i.postimg.cc/28KGmwYT/ex1-27806.png)](https://postimg.cc/kBWKvWBt)

### Detailed explanation:

#### Input Format:
The input format contains three lines consisting of the front part of the first list, front part of the second list and the intersection part of the lists, respectively.

All lines contain the elements of the singly linked list separated by a single space and terminated by -1.  

So the first line would contain
       a1, a2, ...an, -1. 

Similarly, the second line would contain
       b1, b2, ...bm, -1. 

Similarly, the third line would contain
       c1, c2, ...ck -1. 

#### Output Format:
The only output line contains data from the first merged node if the correct node is returned. If there is no merging or incorrect answer, the output contains -1.

You don't have to print by yourself explicitly. It has been taken care of. You need to return the first merged node.

```
Sample Input 1 :
4 1 -1
5 6 -1
8 -1

Sample Output 1 :
8

Explanation For Sample Input 1:
As shown in the diagram, the node with data is 8, at which merging starts
```
[![1-27805.png](https://i.postimg.cc/ydxWVFsX/1-27805.png)](https://postimg.cc/qhfpw6tz)
```
Sample Input 2 :
1 9 1 -1
3 -1
2 -1

Sample Output 2 :
2

Constraints :
-10^9 <= data <= 10^9 and data != -1
 The length of both the linked list is positive.
 Time Limit: 1 sec
```

**Complete the following C++ function:**
```c++
/****************************************************************

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

*****************************************************************/

Node* findIntersection(Node *firstHead, Node *secondHead) {
    //Write your code here
}
```


