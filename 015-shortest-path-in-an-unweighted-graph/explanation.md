The given problem is to find the shortest path between two nodes in an unweighted graph. The solution utilizes the Breadth-First Search (BFS) algorithm to find the shortest path.

### Solution Explanation:

#### Function: `shortestPath`

1. **Graph Representation**:
   - `vector<vector<int>> adj(n+1)`: Initializes an adjacency list to represent the graph where `adj[i]` contains the neighbors of node `i`.
   - The input edges are used to construct this adjacency list.

2. **Initialization**:
   - `vector<int> dist(n+1, INT_MAX)`: Initializes an array `dist` to store the distance of each node from the starting node `s`. Initially, all distances are set to `INT_MAX`.
   - `vector<int> parent(n+1, -1)`: Initializes an array `parent` to keep track of the parent of each node in the shortest path. `-1` denotes nodes without a parent.
   - `queue<int> q`: Initializes a queue for BFS traversal.

3. **BFS for Shortest Path**:
   - Starts from the source node `s`.
   - Sets the distance of `s` as 0 and pushes it into the queue.
   - While the queue is not empty:
     - Dequeue a node `node`.
     - For each neighbor `neighbor` of `node`:
       - If the distance to `neighbor` is still `INT_MAX` (not visited yet):
         - Updates the distance of `neighbor` to be `dist[node] + 1`.
         - Sets the parent of `neighbor` as `node`.
         - Enqueues `neighbor`.

4. **Backtracking to Construct Path**:
   - Constructs the shortest path vector `path` by backtracking from the destination node `t` using the parent information.
   - Starts from `t` and goes back to its parent, then to its grandparent, and so on until it reaches the source node `s`.
   - Reverses `path` to get the correct order from `s` to `t`.

5. **Returns**:
   - Returns the vector `path` containing the shortest path from `s` to `t`.

#### Function: `main`

1. **Input Processing**:
   - Reads the number of test cases `T`.
   - For each test case:
     - Reads the number of houses `n`, the number of roads `m`, starting node `s`, and ending node `t`.
     - Reads `m` pairs of integers denoting the roads between houses.
     - Calls the `shortestPath` function with the provided inputs.
     - Prints the resulting shortest path vector.

### Time Complexity Analysis:

- Building the adjacency list: O(m)
- BFS traversal: O(n + m), where n is the number of nodes and m is the number of edges
- Constructing the shortest path: O(n)
- Overall time complexity: O(n + m)

The solution constructs the graph, performs BFS traversal to find the shortest path, and constructs the path vector, ensuring the shortest path from the source node `s` to the destination node `t`.



