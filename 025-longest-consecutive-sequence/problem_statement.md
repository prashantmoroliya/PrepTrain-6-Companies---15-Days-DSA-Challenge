# Longest Consecutive Sequence

### Problem Statement

You are given an unsorted array/list 'ARR' of 'N'  integers. Your task is to return the length of the longest consecutive sequence.

The consecutive sequence is in the form ['NUM', 'NUM' + 1, 'NUM' + 2, ..., 'NUM' + L] where 'NUM' is the starting integer of the sequence and 'L' + 1 is the length of the sequence.

Note: <br>
If there are any duplicates in the given array we will count only one of them in the consecutive sequence.

For example- <br>
For the given 'ARR' [9,5,4,9,10,10,6].

Output = 3

The longest consecutive sequence is [4,5,6].
<br>
Follow up: <br>
Can you solve this in O(N) time and O(N) space complexity?

### Detailed explanation

#### Input Format:
The first line of input contains a single integer 'T', representing the number of test cases or queries to be run. Then the 'T' test cases follow.

The first line of each test case contains integer 'N' denoting the size of the array.

The second line of each test case contains 'N' single space-separated integers, elements of the array.  

#### Output Format:
For each test case, print an integer in a single line that represents the length of the longest consecutive sequence.

#### Note:
You are not required to print the expected output; it has already been taken care of. Just implement the function. 

#### Constraints:
1 <= T <= 10 <br>
1 <= N <= 10^5 <br>
-10^9 <= ARR[i] <= 10^9 <br>
<br>
Time Limit: 1 sec <br>
<br>

```
Sample Input 1 :
1 
5
33 20 34 30 35

Sample Output 1 :
3

Explanation to Sample Input 1 :
The longest consecutive sequence is [33, 34, 35].

Sample Input 2 :
1
7
1 9 3 10 4 20 2    

Sample Output 2 :
4

Explanation to Sample Input 2 :
The consecutive sequence is in the form ['NUM', 'NUM' + 1, 'NUM' + 2,...,'NUM' + 'L']. So in the given array, the longest consecutive sequence is [1,2,3,4] where 'NUM' = 1 and 'L' = 3. And the length of the sequence will be 'L' + 1 = 4.
```

**Complete the following C++ function:**
```c++
#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
}
```


