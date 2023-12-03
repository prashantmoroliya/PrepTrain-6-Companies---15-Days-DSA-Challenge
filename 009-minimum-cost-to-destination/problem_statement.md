## Minimum Cost to Destination

### Problem Statement

You have been given an N*M matrix where there are 'N' rows and 'M' columns filled with '0s' and '1s'.

- '1' means you can use the cell, and '0' means the cell is blocked. You can move in the 4 following directions from a particular position (i, j):
    1. Left - (i, j-1)
    2. Right - (i, j+1)
    3. Up - (i-1, j)
    4. Down - (i+1, j)

Now, For moving in the up and down directions, it costs you $1, and moving to the left and right directions are free of cost.
  
You have to calculate the minimum cost to reach (X, Y) from (0, 0) where 'X' is the row number and 'Y' is the column number of the destination cell. If it is impossible to reach the destination, print -1.

**Detailed explanation:**

**Input Format**

The first line of input contains two integer values, 'N' and 'M', separated by a single space. They represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.

The second line onwards, the next 'N' lines or rows represent the i-th row values.

Each of the ith rows constitutes 'M' column values separated by a single space.

The next and the final line contains two single space separated integers 'X' and 'Y' where 'X' is the row number and 'Y' is the column number of the destination cell.

**Output Format**

Print the minimum cost required to reach the destination (X, Y) from (0, 0).
If it is impossible to reach the destination, print -1.

**Note:**
1. You are not required to print the output explicitly, it has already been taken care of. Just implement the given function.

2. 'X' and 'Y' are 0-based indexing. 

3. matrix[0][0] will always be 1.

**Constraints**

1 <= N <= 10^3 <br>
1 <= M <= 10^3 <br>
0 <= matrix[i][j] <= 1 <br>
0 <= X < N <br>
0 <= Y < M <br>

```
Sample Input 1 :

4 4
1 0 1 0
1 1 0 1
0 0 0 1
1 1 0 1
3 3

Sample Output 1 :

-1

 Explanation to Sample Input 1 :

It is impossible to reach (3, 3) from (0, 0), so Output is -1.

Sample Input 2 :

5 5
1 0 1 0 0
1 0 1 1 1
1 1 1 0 1
0 0 0 0 1
1 1 1 1 1
3 4

Sample Output 2 :

5

 Explanation to Sample Input 2 :

The optimal path to reach (3, 4) from (0,0) is :
(0, 0) -> (1, 0) -> (2, 0) -> (2, 1) -> (2, 2) -> (1, 2) -> (1, 3) -> (1, 4) -> (2, 4) -> (3, 4)
So the cost is : 1 + 1 + 0 + 0 + 1 + 0 + 0 + 1 + 1 = 5


```

**Complete the following C++ function:**

```c++
int minCostToDestination(int **matrix, int n, int m, int x, int y)
{
    //  Write your code here
    
}
```





