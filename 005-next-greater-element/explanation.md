### Function `nextGreater`

- **Parameters**: 
  - `arr`: Reference to a vector of integers.
  - `n`: Integer representing the size of the array.

- **Initialization**:
  - `vector<int> result(n, -1);`: Initializes a vector `result` of size `n` with all elements set to `-1`. This vector will store the next greater element for each element in the array `arr`.
  - `stack<int> st;`: Initializes an empty stack to store indices of elements.

- **Loop Explanation**:
  - `for (int i = n - 1; i >= 0; --i)`: Iterates through the array from right to left.
    - For each element `arr[i]`:
      - `while (!st.empty() && st.top() <= arr[i]) { st.pop(); }`: Pops elements from the stack that are smaller than or equal to the current element `arr[i]`. This ensures that elements in the stack are in descending order.
      - `if (!st.empty()) { result[i] = st.top(); }`: If the stack is not empty, the top element of the stack is the next greater element for `arr[i]`, so it updates the `result` vector at index `i`.
      - `st.push(arr[i]);`: Pushes the current element's index onto the stack.

- **Return**:
  - Returns the `result` vector, which contains the next greater element for each element in the input array.

### `main` Function

- **Input Processing**:
  - Reads the number of test cases `T`.
  - For each test case:
    - Reads the size of the array `n`.
    - Reads the elements of the array `arr`.
    - Calls the `nextGreater` function to compute the next greater elements for the array.
    - Prints the next greater elements for each element of the array.

### Overall Explanation

- The `nextGreater` function employs a stack to efficiently find the next greater element for each element in the array by traversing from right to left.
- The `main` function handles input, processes each test case, and prints the computed next greater elements for each test case.

This algorithm efficiently computes the next greater elements for each element in the array using a stack-based approach.



