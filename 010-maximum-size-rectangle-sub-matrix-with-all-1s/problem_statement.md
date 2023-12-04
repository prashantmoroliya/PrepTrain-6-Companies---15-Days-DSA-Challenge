# Maximum Size Rectangle Sub-matrix With All 1's

### Problem Statement

You are given an 'N' * 'M' sized binary-valued matrix 'MAT', where 'N' is the number of rows and 'M' is the number of columns. Find and return the maximum size (area) of the submatrix which consists of all 1’s i.e. the maximum area of a submatrix in which each cell has only the value ‘1’.

https://files.codingninjas.in/screenshot-from-2020-11-20-07-52-16-5877.png

In the above image, areas in green, red, and violet color are all submatrices of the original 4x4 matrix.

Note:
1. Binary valued matrix has only two values in each cell: 0 and 1.
2. A submatrix is a matrix formed by selecting certain rows and columns from a larger matrix.
3. The area of a matrix with 'h' rows and 'w' columns is equal to 'h' * 'w'. 

### Detailed explanation:
#### Input Format
- The first line of the input contains an integer 'T' denoting the number of test cases.
- For each test case:
  - The first line contains two space-separated integers 'N' and 'M', where 'N' = the number of rows and 'M' = the number of columns in the given matrix.
  - 'N' lines follow, each containing 'M' space-separated integers (either 1 or 0) denoting matrix elements.

#### Output Format
- For each test case, print in a single line the area of the maximum size submatrix of all 1’s in the given matrix on a new line.

#### Constraints
- 1 <= 'T' <= 50
- 1 <= 'N', 'M' <= 100

- Time Limit: 1 sec

```
Sample Input 1:

2
2 2
1 1
1 1
5 4
1 0 1 1
1 0 1 1
0 1 0 1
1 1 1 1
0 0 0 1

Sample Output 1:

4
5

Explanation For Sample Input 1:

For First Test Case: It is easy to see that whole matrix of size 2 * 2 contains '1' only hence the required area will be 4.

For Second Test Case:
https://files.codingninjas.in/screenshot-from-2020-11-20-08-14-58-5878.png

Sample Input 2:

2
2 2
1 0
0 1
4 4
1 1 1 1
1 1 1 1
0 0 1 1
0 0 1 1

Sample Output 2:

1
8
```

**Complete the following C++ function:**
```c++
int maximalAreaOfSubMatrixOfAll1(vector<vector<int>> &mat, int n, int m){
	// Write your code here.
}
```





