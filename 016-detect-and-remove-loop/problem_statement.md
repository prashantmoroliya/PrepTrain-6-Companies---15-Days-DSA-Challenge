# Detect and Remove Loop 

#### Problem Statement:
Given a singly linked list, you have to detect the loop and remove the loop from the linked list, if present. You have to make changes in the given linked list itself and return the updated linked list.
Expected Complexity: Try doing it in O(n) time complexity and O(1) space complexity. Here, n is the number of nodes in the linked list.

### Detailed explanation:
#### Input Format

The first line of input contains two values: the number of nodes in the linked list and the value of the kth node from which the last node connects to form the loop. The second line of input contains the given linked list.

- The value of k should be greater than or equal to 0 and less than or equal to n.
- For k equal to 0, there is no loop present in the linked list.
- For k equal to n, the last node is connected to itself to form the cycle.

### Output Format

The only output line contains the linked list after removing the loop if present.

### Constraints

- 1 <= N <= 100000.
- 1 <= 'VAL' <= 1000.
- Time limit: 1 sec

- Time limit: 1 sec

Sample Input:

6 2
1 2 3 4 5 6 

Sample Output:

1 2 3 4 5 6

Explanation:

For the given input linked list, the last node is connected to the second node as:
[![0000000000003103.png](https://i.postimg.cc/Y0f44J3w/0000000000003103.png)](https://postimg.cc/PvJf9V96)

Now, after detecting and removing this loop the linked list will be:
[![0000000000003104.png](https://i.postimg.cc/LX9GKPbB/0000000000003104.png)](https://postimg.cc/DWNx1SF8)




