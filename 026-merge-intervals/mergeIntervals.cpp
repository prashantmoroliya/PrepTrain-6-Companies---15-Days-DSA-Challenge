#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals) {
  int n = intervals.size();
  sort(intervals.begin(), intervals.end());
  vector<vector<int>> res;

  for (int i = 0; i < n; i++) {
    int curS = intervals[i][0];
    int curE = intervals[i][1];

    if (res.empty() || curS > res.back()[1]) {
      res.push_back(intervals[i]);
    } else {
      res.back()[1] = max(res.back()[1], curE);
    }
  }

  return res;
}

int main() {
  int N;
  cin >> N;

  vector<vector<int>> intervals(N, vector<int>(2));

  for (int i = 0; i < N; i++) {
    cin >> intervals[i][0];
  }

  for (int i = 0; i < N; i++) {
    cin >> intervals[i][1];
  }

  vector<vector<int>> mergedIntervals = mergeIntervals(intervals);

  for (const auto &interval : mergedIntervals) {
    cout << interval[0] << " " << interval[1] << endl;
  }

  return 0;
}
