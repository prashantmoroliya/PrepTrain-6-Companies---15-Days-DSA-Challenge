# Find Number Of Islands

### Problem Statement
You are given a 2-dimensional array/list having N rows and M columns, which is filled with ones(1) and zeroes(0). 1 signifies land, and 0 signifies water.

A cell is said to be connected to another cell, if one cell lies immediately next to the other cell, in any of the eight directions (two vertical, two horizontal, and four diagonals).

A group of connected cells having value 1 is called an island. Your task is to find the number of such islands present in the matrix.

### Detailed explanation

#### Input Format:
The first line of input contains two integer values, 'N' and 'M', separated by a single space. They represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.

The second line onwards, the next 'N' lines or rows represent the ith row values.

Each of the i-th row constitutes 'M' column values separated by a single space.

#### Output Format:
The only line of output prints the number of islands present in the 2-dimensional array.

#### Note:
You are not required to print anything explicitly, it has already been taken care of. Implement the function and return the desired output.

#### Constraints:
```
1 <= N <= 10^3 
1 <= M <= 10^3
0 <= ARR[i][j] <= 1

Time limit: 1sec
```

```
Sample Input 1 :
4 5
0 1 1 0 0
1 0 0 1 0
0 0 1 0 0
1 0 0 0 1

Sample Output 1 :
3

Explanation For Sample Input 1 :
The first island of connected 1s is signified by: {0, 1}, {0, 2}, {1, 0}, {1, 3}, {2, 2}.
The second island being: {3, 0}.
The third island being: {3, 4}.

Sample Input 2 :
4 4
1 0 0 1
0 1 1 0
0 1 1 0
1 0 0 1

Sample Output 2 :
1
```

**Complete following C++ function:**
```c++
int getTotalIslands(int** arr, int n, int m) {
   // Write your code here.
}
```

