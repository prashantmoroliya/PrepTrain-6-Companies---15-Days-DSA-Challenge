# First non repeating character 

**Problem Statement**
Ninjas has been given an array. He wants to find a subarray such that the sum of all elements in the subarray is maximum.
Subarray 'A' is greater than sub-array 'B' if sum(A) > sum(B). If two sub-array have the same maximum sum, then output the subarray that has a larger length.
A subarray means a contiguous part of an array. For example, In 'arr' = [1, 2, 3, 4], [1, 2], [2, 3, 4] are the contiguous subarry but [1, 3, 4] is not a subarray.

Note:
More than one sub-array can have a maximum sum, in that case, output any.

---

**Detailed Explanation:**
<br>
**Input Format:**
The first line contains an integer 'T' which denotes the number of test cases or queries to be run.

The first line of each test case contains a single integer ‘N’ denoting the size of the array.

The second line of each test case contains ‘N’ space-separated integers denoting the elements of the array.

<br><br>
**Output Format:**
For each case, If the returned subarray is correct then print 1, else print 0.

The output of each test case will be printed in a separate line.
<br><br>
**Note:**
You do not need to input or print anything, and it has already been taken care of. Just implement the given function.

---

**Constraints:**
<br><br>
1 <= T <= 5 <br>
1 <= N <= 1000 <br>
-99 <= |arr| <= 99 <br>
<br>
Time Limit: 1 sec <br>
```
Sample Input 1:

2
6
1 2 5 -7 2 3
4
-2 -3 -4 1

Sample Output 1:

1
1    

Explanation Of Sample Input 1:

Test case 1:
For the first test case of sample output 1, as we start traveling the array, the summation of the first 3 elements counts to 8 but if add the rest of the elements, our sum decreases on reaching the end. Hence our maximum subarray will be [ 1, 2, 5 ]. 

Test case 2:   
For the second test case of sample output 1, as we start traveling the array, we find that our maximum subarray would contain only the last element as the rest of the elements make the sum negative. Hence our maximum subarray will be [1].

Sample Input 2:

2
7
-3 1 2 3 -4 6 -9
4
-4 -3 -2 -1

Sample Output 2:

1 
1

Explanation Of Sample Input 2:

Test case 1:
For the first test case of sample output 2, we would consider the subarray [ 1, 2, 3, -4, 6].

Test case 2:   
For the second test case of sample output 2, as we start traveling the array, we find that all the numbers in the array are negative. So, our maximum sum subarray is [-1]
```

C++ function to solve
```c++
#include <bits/stdc++.h> 
vector<int> maximumsumSubarray(vector<int> &arr , int n)
{
    //Write your code here
}
```


