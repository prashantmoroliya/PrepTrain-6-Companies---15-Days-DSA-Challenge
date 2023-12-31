# Next Greater Element

### Problem Statement

You are given an array `arr` of length `N`. Return a list of integers containing the NGE (next greater element) of each element of the given array. The NGE for an element `X` is the first greater element on the right side of `X` in the array. Elements for which no greater element exists, consider the NGE as -1.

**Note:**

If the given array is `[1, 3, 2]`, then you need to return `[3, -1, -1]`. Because for 1, 3 is the next greater element, for 3 it does not have any greater number to its right, and similarly for 2.

## Detailed Explanation:

### Input Format

The first line of input contains a single integer `T`, representing the number of test cases or queries to be run. 

Then the `T` test cases follow.

The first line of each test case contains an integer `N`, representing the length of the input array (`ARR`).

The second line contains `N` single space-separated integers representing elements of the array `arr`.

### Output Format

For each test case, print a list of integers each representing the NGE (next greater element) of each element of the given array in a single line.

### Constraints

1 <= T <= 10 <br>
1 <= N <= 10^5 <br>
0 <= ARR[i] <= 10^9 <br>
<br>
Time Limit: 1sec <br>
<br>

```
Sample Input 1 :

1
4
1 2 4 3

Sample Output 1 :

2 4 -1 -1

Sample Input 2 :

1
4
9 3 6 5

Sample Output 2 :

-1 6 -1 -1

Explanation for Sample Input 2 :

For element 9, there is no next greater element. So -1 would be the next greater element.
For element 3, 6 is the next greater element. 
For element 6, there is no next greater element. So -1 would be the next greater element.
For element 5, there is no next greater element. So -1 would be the next greater element.
```

C++ function to solve
```c++
#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here

}
```
