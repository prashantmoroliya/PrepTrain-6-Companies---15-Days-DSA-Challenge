# Merge Intervals

### Problem Statement
You are given N number of intervals, where each interval contains two integers denoting the start time and the end time for the interval.

The task is to merge all the overlapping intervals and return the list of merged intervals sorted by increasing order of their start time.

Two intervals [A,B] and [C,D] are said to be overlapping with each other if there is at least one integer that is covered by both of them.

For example:

For the given 5 intervals - [1, 4], [3, 5], [6, 8], [10, 12], [8, 9].

Since intervals [1, 4] and [3, 5] overlap with each other, we will merge them into a single interval as [1, 5].

Similarly, [6, 8] and [8, 9] overlap, merge them into [6,9].

Interval [10, 12] does not overlap with any interval.

Final List after merging overlapping intervals: [1, 5], [6, 9], [10, 12].

### Detailed explanation:

#### Input format:
The first line of input contains an integer N, the number of intervals.

The second line of input contains N integers, i.e. all the start times of the N intervals.

The third line of input contains N integers, i.e. all the end times of the N intervals.

#### Output format:
Print S lines, each contains two single space-separated integers A, and B, where S is the size of the merged array of intervals, 'A' is the start time of an interval and 'B' is the end time of the same interval.

#### Note:
You do not need to print anything, it has already been taken care of. Just implement the given function.

#### Constraints:
1 <= N <= 10^5 <br>
0 <= START, FINISH <= 10^9 <br>
<br>
Time Limit: 1sec <br>
<br>
```
Sample Input 1:
2
1 3
3 5

Sample Output 1:
1 5  

Explanation for Sample Input 1
Since these two intervals overlap at point 3 so we merge them and the new interval becomes (1,5).

Sample Input 2:
5
1 3 6 8 10
4 5 8 9 12

Sample Output 2:
1 5
6 9
10 12
```

**Complete the following C++ function:**
```c++
#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
}
```



