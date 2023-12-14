#include <iostream>
#include <vector>
using namespace std;

int dX[] = {0, 1, 1, 1, 0, -1, -1, -1};
int dY[] = {-1, -1, 0, 1, 1, 1, 0, -1};
vector<vector<bool>> vis;

void getTotalIslandHelper(int **mat, int n, int m, int x, int y) {
  if (!(x >= 0 && x < n && y >= 0 && y < m && mat[x][y] == 1 && !vis[x][y]))
    return;

  vis[x][y] = true;

  for (int i = 0; i < 8; i++) {
    int nextX = x + dX[i];
    int nextY = y + dY[i];

    getTotalIslandHelper(mat, n, m, nextX, nextY);
  }
}

int getTotalIslands(int **arr, int n, int m) {
  vis = vector<vector<bool>>(n, vector<bool>(m, false));
  int islands = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == 1 && !vis[i][j]) {
        islands++;
        getTotalIslandHelper(arr, n, m, i, j);
      }
    }
  }

  return islands;
}

// just ignore this function;
int main() {
  int n, m;
  cin >> n >> m;

  int **arr = new int *[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new int[m];
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  cout << getTotalIslands(arr, n, m) << endl;

  // Free memory
  for (int i = 0; i < n; i++) {
    delete[] arr[i];
  }
  delete[] arr;

  return 0;
}
