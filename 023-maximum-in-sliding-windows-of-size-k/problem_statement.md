# Maximum In Sliding Windows Of Size K

### Problem Statement

Given an array/list of integers of length ‘N’, there is a sliding window of size ‘K’ which moves from the beginning of the array, to the very end. You can only see the ‘K’ numbers in a particular window at a time. For each of the 'N'-'K'+1 different windows thus formed, you are supposed to return the maximum element in each of them, from the given array/list.

### Detailed Explanation

#### Input Format:
The first line contains a single integer ‘T’ denoting the number of test cases. The 'T' test cases follow.

The first line of each test case contains two single space-separated integers ‘N’ and ‘K’ denoting the number of elements in the array/list and the size of the window size respectively.

The second line contains ‘N’ single space-separated integers denoting the elements of the array/list.

#### Output Format:
For each test case, print the output array/list which contains the sliding window maximum in a separate line.

#### Note:
You do not need to print anything, it has already been taken care of. Just implement the given function.

### Constraints:
1 <= T <= 50 <br>
1 <= N <= 10^4 <br>
1 <= K <= N <br>
0 <= ARR[i] <= 10^5 <br>
<br>
Where, ARR[i] denotes the i-th element in the array/list. <br>
<br>
Time Limit: 1 sec. <br>
<br>

```
Sample Input 1 :

2
3 1
1 2 2
5 2
4 2 1 4 4

Sample Output 1 :

1 2 2
4 2 4 4

Explanation to Sample Input 1 :

In the first test case, 
The maximum of window {1} is 1.
The maximum of window {2} is 2.
The maximum of window {2} is 2.
So the output will be {1, 2, 2}.

In the second test case, 
The maximum of window {4,2} is 4.
The maximum of window {2,1} is 2.
The maximum of window {1,4} is 4.
The maximum of window {4,4} is 4.
So the output will be {4, 2, 4, 4}.

Sample Input 2 :

2
5 3
2 2 2 3 3
7 4
2 3 1 4 5 1 5

Sample Output 2 :

2 3 3
4 5 5 5

Explanation to Sample Input 2 :

In the first test case, 
The maximum of window {2,2,2} is 2.
The maximum of window {2,2,3} is 3.
The maximum of window {2,3,3} is 3.
So the output will be {2, 3, 3}.

In the second test case, 
The maximum of window {2,3,1,4} is 4.
The maximum of window {3,1,4,5} is 5.
The maximum of window {1,4,5,1} is 5.
The maximum of window {4,5,1,5} is 5.
So the output will be {4, 5, 5, 5}.
```

**Complete the following C++ function:**
```c++
#include <bits/stdc++.h> 
vector<int> slidingWindowMaximum(vector<int> &nums, int &k) {
    //    Write your code here.
}
```



