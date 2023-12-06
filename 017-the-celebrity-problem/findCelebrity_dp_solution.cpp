#include <iostream>
#include <vector>

using namespace std;

// ignore this function...
bool knows(int A, int B) {
    // Implementation of knows function (assume it's provided)
    return true; // Replace this with the actual implementation
}

// copy this function....
int findCelebrity(int n) {
    vector<vector<int>> dp(n, vector<int>(n, 0));

    // Fill dp array based on knows function
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                if (knows(i, j)) {
                    dp[i][j] = 1;
                } else {
                    dp[j][i] = 1;
                }
            }
        }
    }

    // Eliminate potential candidates
    for (int i = 0; i < n; ++i) {
        bool isCelebrity = true;
        for (int j = 0; j < n; ++j) {
            if (i != j && dp[i][j] == 1) {
                isCelebrity = false;
                break;
            }
        }
        if (isCelebrity) {
            for (int j = 0; j < n; ++j) {
                if (j != i && dp[j][i] == 0) {
                    isCelebrity = false;
                    break;
                }
            }
        }
        if (isCelebrity) {
            return i;
        }
    }

    return -1;
}


// ignore this function....
int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int n;
        cin >> n; // Number of people in the party

        // Process the test case
        int celebrity = findCelebrity(n);
        cout << celebrity << endl;
    }

    return 0;
}

