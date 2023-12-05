Code implements Kadane's algorithm to find the maximum subarray sum in a given array. Let's break down the logic step by step:

### `maxSubarraySum` Function:

- **Parameters:** 
  - `vector<int> arr`: Represents the array of integers.
  - `int n`: Represents the size of the array.

- **Variables Initialization:**
  - `max_so_far`: Keeps track of the maximum sum found so far.
  - `max_ending_here`: Tracks the maximum sum of the subarray ending at the current index.

- **Loop through the Array:**
  - Iterates through each element of the array.
  - `max_ending_here` is updated by adding the current element to it.

- **Subarray Sum Logic:**
  - If `max_ending_here` becomes negative (i.e., the sum of the subarray is less than 0), it means including the current element in the subarray would decrease the overall sum. Hence, it's better to start a new subarray from the next element.
  - If `max_ending_here` becomes positive, it means the subarray's sum is positive. In this case, we compare it with `max_so_far` to update `max_so_far` if a larger subarray sum is found.

- **Return:**
  - The function returns `max_so_far`, which represents the maximum subarray sum found.

### `main` Function:
- Takes input for the size of the array `n`.
- Reads `n` integers and stores them in the `arr` vector.
- Calls the `maxSubarraySum` function passing the array and its size as arguments.
- Prints the maximum subarray sum obtained.

### Explanation of Kadane's Algorithm:
- **Initialization:** 
  - Initially, both `max_so_far` and `max_ending_here` are set to 0.
- **Iteration:**
  - The algorithm iterates through each element of the array.
  - `max_ending_here` keeps track of the maximum sum of a subarray ending at the current index.
  - If the sum becomes negative, the algorithm resets `max_ending_here` to 0 because any subarray starting from this point will have a larger sum without including the current negative sum.
  - If the sum becomes positive, it compares it with the maximum sum found so far (`max_so_far`) and updates `max_so_far` if the current subarray's sum is greater.

### Time Complexity:
- The time complexity of this algorithm is O(n) because it processes each element of the array only once.

This algorithm efficiently finds the maximum subarray sum within the given array, handling both positive and negative numbers appropriately.