#include <iostream>
#include <vector>
#include <stack>    // include this file.. it is important to import this...
using namespace std;

// copy this function....
int maximalAreaOfSubMatrixOfAll1(vector<vector<int>>& mat, int n, int m) {
    vector<int> heights(m, 0); // Heights for histogram
    int maxArea = 0;

    // Calculate maximum area for each row as histogram
    for (int i = 0; i < n; ++i) {
        // Update heights for each row
        for (int j = 0; j < m; ++j) {
            if (mat[i][j] == 0) {
                heights[j] = 0; // Reset height if the current cell is 0
            } else {
                heights[j] += mat[i][j]; // Increment height if the current cell is 1
            }
        }

        // Calculate maximum area for histogram
        stack<int> st;
        int area = 0, top = 0, width = 0;

        int j = 0;
        while (j < m) {
            if (st.empty() || heights[st.top()] <= heights[j]) {
                st.push(j++);
            } else {
                top = st.top();
                st.pop();
                width = st.empty() ? j : j - st.top() - 1;
                area = max(area, heights[top] * width);
            }
        }

        while (!st.empty()) {
            top = st.top();
            st.pop();
            width = st.empty() ? j : j - st.top() - 1;
            area = max(area, heights[top] * width);
        }

        maxArea = max(maxArea, area);
    }

    return maxArea;
}


// ignore this main() function...
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> mat[i][j];
            }
        }

        int result = maximalAreaOfSubMatrixOfAll1(mat, n, m);
        cout << result << endl;
    }

    return 0;
}




