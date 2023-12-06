Solution aims to perform the boundary traversal of a binary tree in an anti-clockwise direction starting from the root node. Let's break down the solution step by step:

### TreeNode Structure
The code uses a `TreeNode` structure to represent the nodes of the binary tree. Each node contains data, a pointer to the left child, and a pointer to the right child. There's also a destructor defined to handle memory cleanup.

### Boundary Traversal Functions

#### `addLeftBoundary`
This function adds the nodes of the left boundary of the tree to the `result` vector. It traverses the left side of the tree, excluding the leaf node, by iteratively moving to the left child if present, or to the right child if the left child is absent.

#### `addLeaves`
This function identifies and adds the leaf nodes of the tree to the `result` vector. It recursively traverses the tree and adds the leaf nodes to the result when it encounters a node without left and right children.

#### `addRightBoundary`
Similar to `addLeftBoundary`, this function adds the nodes of the right boundary of the tree to the `result` vector. However, it traverses the right side of the tree in a manner opposite to `addLeftBoundary`, pushing the nodes onto a stack and then popping them in reverse order to add to the result.

#### `traverseBoundary`
The main function orchestrating the boundary traversal. It initializes an empty `result` vector and starts by adding the root node to the result. Then it calls the boundary adding functions (`addLeftBoundary`, `addLeaves`, `addRightBoundary`) to build the anti-clockwise boundary traversal sequence.

### Optimizations
- **Traversal Efficiency:** Each function focuses on a specific aspect of the boundary traversal, optimizing for its particular traversal direction (left, right) or node type (leaf nodes).
- **Space Complexity:** The usage of a stack in `addRightBoundary` helps manage the traversal and order of right boundary nodes efficiently.
- **Recursion:** The `addLeaves` function uses recursion to traverse the tree and identify leaf nodes effectively.

### Possible Improvements
- **Error Handling:** Error checking can be added for nullptr checks or unexpected tree structures.
- **Optimization:** The `addLeaves` function can potentially be optimized further to avoid traversing the entire subtree unnecessarily.

Overall, this solution employs different traversal methods for the left and right boundaries while handling leaf nodes separately to construct the anti-clockwise boundary traversal sequence of the binary tree.






