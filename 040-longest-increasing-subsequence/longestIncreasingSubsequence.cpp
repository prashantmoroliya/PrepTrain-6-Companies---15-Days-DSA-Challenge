#include <algorithm>
#include <iostream>
using namespace std;

// copy only this;
int longestIncreasingSubsequence(int arr[], int n) {
  int dp[n];
  int ans = 0;

  for (int i = 0; i < n; i++) {
    int position = lower_bound(dp, dp + ans, arr[i]) - dp;
    dp[position] = arr[i];

    if (position == ans) {
      ans++;
    }
  }

  return ans;
}

// ignore this;
int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int length = longestIncreasingSubsequence(arr, n);
  cout << length << endl;

  return 0;
}
