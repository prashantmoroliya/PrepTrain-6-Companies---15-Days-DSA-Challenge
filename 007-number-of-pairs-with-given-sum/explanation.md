### Approach Explanation:

#### Goal:
Given an array `arr[]` of integers and a target sum `Sum`, we aim to find the total number of pairs in the array whose elements' sum equals the given `Sum`.

#### Method:
1. **Use a HashMap (or unordered_map in C++):** 
   - We'll employ a hashmap to efficiently keep track of the frequency of elements encountered so far in the array.
   - The hashmap will store elements as keys and their frequencies as values.

2. **Iterate Through the Array:**
   - Traverse through each element of the array.
   - For each element `arr[i]`, calculate its complement, which is `Sum - arr[i]`.

3. **Count Pairs with Given Sum:**
   - While iterating through the array:
     - Check if the complement exists in the hashmap.
     - If it does, it means there is a pair that sums up to the given `Sum`.
     - Increment the count by the frequency of the complement in the hashmap.
     - Update the frequency of the current element in the hashmap.

4. **Return the Count of Pairs:**
   - The final count obtained represents the total number of pairs whose elements sum up to the given `Sum`.
   - Return this count as the output.

#### Explanation with Example:
Let's consider the sample input: `arr[] = {2, 8, 10, 5, -2, 5}`, `Sum = 10`.

- Initialize an empty hashmap and count = 0.
- Start iterating through the array elements:
  - For `arr[0] = 2`, the complement is `10 - 2 = 8`.
    - There is no '8' in the hashmap, so move to the next element.
  - For `arr[1] = 8`, the complement is `10 - 8 = 2`.
    - There is one '2' in the hashmap, so increment count by its frequency (which is 1).
  - For `arr[2] = 10`, the complement is `10 - 10 = 0`.
    - There is no '0' in the hashmap, move forward.
  - For `arr[3] = 5`, the complement is `10 - 5 = 5`.
    - There is one '5' in the hashmap, so increment count by its frequency (which is 1).
  - For `arr[4] = -2`, the complement is `10 - (-2) = 12`.
    - There is no '12' in the hashmap, move forward.
  - For `arr[5] = 5`, the complement is `10 - 5 = 5`.
    - There is one '5' in the hashmap, so increment count by its frequency (which is 1).

- Finally, return count = 2 (as there are 2 pairs whose elements sum up to 10).

#### Time Complexity:
- The solution has a time complexity of O(N), where N is the size of the input array.
- The hashmap allows constant time average case lookups and insertions, enabling efficient processing of the array elements.




