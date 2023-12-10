### Function: `mergeIntervals`
```cpp
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals) {
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> res;

    for (int i = 0; i < n; i++) {
        int curS = intervals[i][0];
        int curE = intervals[i][1];

        if (res.size() == 0 || curS > res[res.size() - 1][1]) {
            res.push_back(intervals[i]);
        } else {
            res[res.size() - 1][1] = max(res[res.size() - 1][1], curE);
        }
    }

    return res;
}
```

#### Parameters:
- `vector<vector<int>> &intervals`: A reference to a vector of vectors representing intervals, where `intervals[i][0]` denotes the start point and `intervals[i][1]` denotes the finish point of the i'th interval.

#### Variables:
- `n`: Integer variable representing the number of intervals.
- `res`: Vector of vectors used to store the merged intervals.

#### Workflow:
1. **Sorting Intervals**:
   - The `intervals` vector of vectors is sorted in non-decreasing order based on the start points of the intervals using `sort`.
2. **Merging Intervals**:
   - Loop through the sorted intervals.
   - For each interval, extract the start (`curS`) and end (`curE`) points.
   - Check if the `res` vector is empty or if the current start point (`curS`) is greater than the finish point of the last interval in `res`.
   - If the conditions are met, push the current interval to `res`.
   - Otherwise, update the finish point of the last interval in `res` to the maximum of its current finish point and the finish point of the current interval.
3. **Return Merged Intervals**:
   - Return the `res` vector containing the merged intervals.

### Time Complexity:
- Sorting the intervals takes O(n log n) time.
- The loop iterates through the sorted intervals once, performing comparisons and merging operations, taking O(n) time.
- Therefore, the overall time complexity of the algorithm is O(n log n) due to the sorting process.

### Space Complexity:
- Additional space is used for the `res` vector to store the merged intervals.
- The space complexity is O(n) as the `res` vector can store up to `n` intervals in the worst case.

### Conclusion:
The code successfully merges overlapping intervals by iterating through and comparing intervals based on their start and end points. It efficiently handles merging without the need for additional data structures beyond the provided `intervals` vector. The algorithm performs well within the specified constraints and provides the merged intervals in sorted order.



