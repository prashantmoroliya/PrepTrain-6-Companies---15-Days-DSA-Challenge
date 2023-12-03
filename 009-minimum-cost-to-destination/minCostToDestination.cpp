#include <iostream>
#include <queue>  // include this is important otherwise code will show compile time error...
using namespace std;

// copy from here...
// Structure to represent a cell in the matrix
struct Cell {
    int x, y, cost;
};

// Function to check if a cell is valid to move to
bool isValid(int x, int y, int n, int m, int **matrix, bool **visited) {
    return (x >= 0 && x < n && y >= 0 && y < m && matrix[x][y] == 1 && !visited[x][y]);
}

// Function to find the minimum cost to reach the destination
int minCostToDestination(int **matrix, int n, int m, int x, int y) {
    // Check if the destination itself is blocked
    if (matrix[x][y] == 0) {
        return -1;
    }

    // Array to define the possible movements (left, right, up, down)
    int dx[] = {0, 0, -1, 1};
    int dy[] = {-1, 1, 0, 0};

    // Create a visited array to keep track of visited cells
    bool **visited = new bool *[n];
    for (int i = 0; i < n; ++i) {
        visited[i] = new bool[m]();
    }

    // Initialize a queue for BFS
    queue<Cell> q;

    // Starting cell (0, 0) with cost 0
    q.push({0, 0, 0});
    visited[0][0] = true;

    // BFS traversal
    while (!q.empty()) {
        Cell curr = q.front();
        q.pop();

        // If reached the destination, return the cost
        if (curr.x == x && curr.y == y) {
            return curr.cost;
        }

        // Explore all possible directions
        for (int i = 0; i < 4; ++i) {
            int newX = curr.x + dx[i];
            int newY = curr.y + dy[i];

            // If the new cell is valid, add it to the queue
            if (isValid(newX, newY, n, m, matrix, visited)) {
                q.push({newX, newY, curr.cost + (i < 2 ? 0 : 1)}); // Increment cost for up/down movements
                visited[newX][newY] = true;
            }
        }
    }

    // If destination is not reachable
    return -1;
}
// tile here...


// ignore this...
int main() {
    int n, m;
    cin >> n >> m;

    int **matrix = new int *[n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    int x, y;
    cin >> x >> y;

    int result = minCostToDestination(matrix, n, m, x, y);
    cout << result << endl;

    return 0;
}

