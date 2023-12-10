# Longest Increasing Path In A 2D Matrix

### Problem Statement
You have been given a MATRIX of non-negative integers of size N x M where 'N' and 'M' denote the number of rows and columns, respectively.

Your task is to find the length of the longest increasing path when you can move to either four directions: left, right, up or down from each cell. Moving diagonally or outside the boundary is not allowed.

Note: A sequence of integers is said to form an increasing path in the matrix if the integers when traversed along the allowed directions can be arranged in strictly increasing order. The length of an increasing path is the number of integers in that path.

For example :

3 2 2
5 6 6
9 5 11 

In the given matrix, 3 →  5 →  6 and 3 →  5 →  9 form increasing paths of length 3 each.

## Detailed explanation

#### Input Format:
The first line of input contains an integer 'T' representing the number of test cases or queries to be processed. Then the test case follows.

The first line of each test case contains two space-separated integers 'N', 'M' where 'N' and 'M' denote the number of rows and columns of the matrix, respectively.

From the second line of each test case, the next 'N' lines represent the rows of the MATRIX. Every row contains 'M' single space-separated integers.

#### Output Format:
For each test case, print the length of the longest increasing path.

Print the output of each test case in a separate line.

#### Note :
You do not need to print anything; it has already been taken care of. Just implement the function.

#### Constraints:
1 <= T <= 100 <br>
1 <= N <= 50 <br>
1 <= M <= 50 <br>
0 <= MATRIX[i] <= 10^5 <br>
<br>
Time Limit: 1sec <br>
<br>
```
Sample Input 1 :
1
3 3 
1 2 3 
5 6 4
9 5 11 

Sample Output 1 :
5

Sample Output 1 Explanation:
The longest increasing path in the MATRIX is 1 → 2 → 3 → 4 → 11 which is of length 5.

Sample Input 2 :
1
3 3
8 8 3
5 5 7
2 1 1

Sample Output 2 :
4

Sample Output 2 Explanation :
The longest increasing path in the MATRIX is 1 → 2 → 5 → 8 which is of length 4.

```

**Complete the following C++ function:**
```c++
#include <bits/stdc++.h>
int longestIncreasingPath(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
}
```



