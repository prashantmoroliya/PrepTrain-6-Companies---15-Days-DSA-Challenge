# Maximum of minimum for every window size

## Problem Statement

You are given an array of 'N' integers, and you need to find the maximum of the minimum for every window size. The size of the window should vary from 1 to 'N' only.

For example: <br>
ARR = [1,2,3,4] <br>
Minimums of window size 1 = min(1), min(2), min(3), min(4) = 1,2,3,4 <br>
Maximum among (1,2,3,4) is 4 <br>

Minimums of window size 2 = min(1,2), min(2,3), min(3,4) = 1,2,3 <br>
Maximum among (1,2,3) is 3 <br>

Minimums of window size 3 = min(1,2,3), min(2,3,4) = 1,2 <br>
Maximum among (1,2) is 2 <br>

Minimums of window size 4 = min(1,2,3,4) = 1 <br>
Maximum among them is 1 <br>
The output array should be [4,3,2,1]. <br>

### Detailed explanaton:
#### Input Format:
The input consists of 'T' test cases.
For each test case:
- The first line contains an integer 'N', the size of the array.
- The second line contains 'N' space-separated integers, representing the elements of the array.

#### Output Format:
For each test case, print the space-separated integers representing the maximum of minimums for every window size from 1 to 'N'.

### Constraints:
- 1 <= T <= 100 <br>
- 1 <= N <= 10^4 <br>
- -10^9 <= ARR[i] <= 10^9 <br>
<br>
Where ‘T’ is the number of test cases, ‘N’ is the size of the array and ‘ARR[i]’ is the size of the array elements. <br>
<br>
- The time limit is 1 second.

```
Sample Input 1:

2
4
1 2 3 4
5
3 3 4 2 4    

Sample Output 1:

4 3 2 1
4 3 3 2 2

Explanation for sample input 1:

Test case 1:
Already explained in the question.

Test case 2:
Minimums of window size 1 = min(3), min(3), min(4), min(2), min(4) = 3, 3, 4, 2, 4
Maximum among (3, 3, 4, 2, 4) is 4

Minimums of window size 2 = min(3,3), min(3,4), min(4,2), min(2,4) = 3, 3, 2, 2
Maximum among (3, 3, 2, 2) is 3

Minimums of window size 3 = min(3,3,4), min(3,4,2), min(4,2,4) = 3, 2, 2
Maximum among (3, 2, 2) is 3

Minimums of window size 4 = min(3,3,4,2), min(3,4,2,4) = 2, 2
Maximum among (2, 2) is 2

Minimums of window size 4 = min(3,3,4,2,4) = 2
Maximum among them is 2
The output array should be [4,3,3,2,2].

Sample Input 2:

2
5 
45 -2 42 5 -11 
6 
-2 12 -1 1 20 1 

Sample Output 2:

 45 5 -2 -2 -11
 20 1  1 -1 -1 -2
```

**Complete the following C++ function:**
```c++
#include <bits/stdc++.h> 
vector<int> maxMinWindow(vector<int> a, int n) {
    // Write your code here.
}
```

