### Detailed Explanation of the Solution

#### Data Structures Used:
1. **Struct Cell:** Represents a cell in the matrix and holds the x and y coordinates along with the cost to reach that cell.
   
2. **Queue:** Used to perform BFS traversal for exploring the grid cells.

#### Functions:

1. **isValid Function:** Checks if a cell is valid to move to. It verifies that the cell is within the grid boundaries, not visited before, and accessible (i.e., contains a '1').

2. **minCostToDestination Function:** This function finds the minimum cost to reach the destination using Breadth-First Search (BFS).
   
   - Checks if the destination itself is blocked. If so, returns -1.
   
   - Defines arrays `dx[]` and `dy[]` representing the four possible movements: left, right, up, and down.
   
   - Initializes a boolean `visited` matrix to keep track of visited cells.
   
   - Initializes a queue with the starting cell (0, 0) and cost 0, marking it as visited.
   
   - Performs BFS traversal:
   
       - Dequeues cells from the queue.
       
       - Checks if the dequeued cell is the destination. If so, returns its cost.
       
       - Explores all possible directions from the current cell:
           
           - Calculates the new coordinates.
           
           - If the new cell is valid, updates the cost accordingly (incrementing cost for up/down movements), enqueues it, and marks it as visited.

   - Returns -1 if the destination is not reachable.

#### Main Function (Test Cases):
- Reads the input grid and destination coordinates.
- Calls the `minCostToDestination` function with the provided matrix and destination coordinates.
- Outputs the minimum cost to reach the destination.

This solution efficiently explores the grid using BFS, finding the minimum cost to reach the destination while considering the given movement constraints and blocked cells.





