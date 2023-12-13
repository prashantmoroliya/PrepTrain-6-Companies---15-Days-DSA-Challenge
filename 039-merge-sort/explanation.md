The given code implements the merge sort algorithm to sort an array of integers in non-decreasing order. Here's a detailed breakdown:

### Function: `mergeSort`

- **Inputs**:
  - `arr`: Reference to the vector of integers to be sorted.
  - `n`: Number of elements in the input array.

- **Logic**:
  - The function initially sets `currentGap` to 2.
  - It computes the `nearestPowerTwo` by taking the logarithm base 2 of the input size `n`. If the logarithm is not an integer, it increments it to the next integer value.
  - Using `currentGap` and `nearestPowerTwo`, the function enters a loop that iterates until `currentGap` becomes greater than `nearestPowerTwo`.
  - Inside the loop:
    - Calculates the number of parts to be sorted based on the `currentGap`. If the array size is not evenly divisible by `currentGap`, an additional part is added.
    - For each part:
      - Defines pointers (`ptrLeft`, `copyLeft`, `end`, `ptrRight`, `copyRight`) for partitioning the array.
      - Initializes a temporary vector `mergeArr` to store the merged elements.
      - Performs the merging of two subarrays pointed by `ptrLeft` to `copyRight` and `ptrRight` to `end`.
      - Copies the merged elements from `mergeArr` back to the original array within the specified range.

- **Output**:
  - The function sorts the input vector `arr` in non-decreasing order.

The code utilizes the merge sort algorithm, which divides the array into smaller parts until each part consists of a single element, then merges these smaller parts while sorting them in each merge step.

This implementation uses an iterative approach instead of a recursive one, applying the merge operation on smaller parts and then gradually increasing the partition size to merge larger segments of the array.

It sorts the array in-place by modifying the original input vector `arr`.



