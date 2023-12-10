### Function: `lengthOfLongestConsecutiveSequence`
```cpp
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    int mX = 0; // to store length of longest consecutive sequence;
    int count = 0; // to store the length of current consecutive sequence;

    unordered_set<int> set; // to store all the unique elements of array;

    for (int i = 0; i < n; i++) {
        set.insert(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int previousConsecutiveElement = arr[i] - 1;

        if (set.find(previousConsecutiveElement) == set.end()) {
            int j = arr[i]; // arr[i] is the first value of consecutive sequence;

            while (set.find(j) != set.end()) {
                j++; // the next consecutive element will be j+1;
            }

            mX = max(mX, j - arr[i]); // update maximum length of consecutive sequence.
        }
    }

    return mX;
}
```

#### Parameters:
- `vector<int> &arr`: A reference to the input array containing integers.
- `int n`: An integer representing the size of the array.

#### Variables:
- `mX`: Integer variable to store the length of the longest consecutive sequence.
- `count`: Integer variable initially declared but not used in the code.
- `unordered_set<int> set`: Set to store all unique elements of the array.

#### Workflow:
1. **Insert Elements into Set**:
   - Iterate through the input array `arr` and insert its elements into the `set` to get unique elements.
2. **Find Longest Consecutive Sequence**:
   - Iterate through the array again (`arr`).
   - For each element `arr[i]`, check if its previous consecutive element (`arr[i] - 1`) exists in the `set`.
   - If the previous consecutive element is not found, it indicates that `arr[i]` is the start of a consecutive sequence.
   - Move `j` from `arr[i]` onwards until the next consecutive element is found by checking in the `set`.
   - Update `mX` (longest consecutive sequence length) as the maximum of the current length (`j - arr[i]`) and the previous maximum.
3. **Return the Longest Consecutive Sequence Length**.

### Time Complexity:
- The code iterates through the array twice, once to insert elements into the set and again to find the consecutive sequences.
- Each iteration takes O(n) time.
- The operations within the loop like set insertion, finding elements, and incrementing are O(1) on average for unordered_set.
- Therefore, the overall time complexity of the algorithm is O(n).

### Space Complexity:
- Additional space is used for the unordered set to store unique elements from the array.
- The space complexity is O(n) as the set can store up to `n` elements in the worst case.

### Conclusion:
The code successfully calculates the length of the longest consecutive sequence in an array by leveraging an unordered set to efficiently handle unique elements. It performs well within the specified constraints and provides the length of the longest consecutive sequence in linear time complexity.



