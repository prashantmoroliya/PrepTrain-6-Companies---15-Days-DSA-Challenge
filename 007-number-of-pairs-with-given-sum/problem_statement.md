# Number Of Pairs With Given Sum

### Problem Statement

You have been given an integer array/list(arr) and a number 'Sum'. Find and return the total number of pairs in the array/list which when added, results equal to the 'Sum'.
Note:
Given array/list can contain duplicate elements.

(arr[i],arr[j]) and (arr[j],arr[i]) are considered the same.

**Detailed Explanation:**

**Input Format:**
The first line contains 2 space-separated integers N and Sum.

The next line contains N space-separated integers representing array elements.

**Output Format:**
Print the total number of pairs present in the array/list.

**Constraints:**
1 <= N <= 10^5
-10^4 <= Sum <= 10^4
-10^4 <=  arr[ i ] <= 10^4

```
Sample Input 1:

9 12
1 3 6 2 5 4 3 2 4

Sample Output 1:

0

 Explanation For Sample Input 1:

Since there doesn't exist any pair with a sum equal to 12, so we print 0.

Sample Input 2:

6 10
2 8 10 5 -2 5

Sample Output 2:

2
```


**Solve the following function:**
```cpp
long long pairsWithGivenSum(int arr[], int n, int sum)
{
    // Write your code here
}
```

