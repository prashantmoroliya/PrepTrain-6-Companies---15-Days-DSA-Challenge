#include <bits/stdc++.h>
using namespace std;

vector<int> slidingWindowMaximum(vector<int> &nums, int &k) {
  deque<int> dq;
  vector<int> ans;

  for (int i = 0; i < nums.size(); i++) {
    if (!dq.empty() && dq.front() == i - k) {
      dq.pop_front();
    }

    while (!dq.empty() && nums[dq.back()] <= nums[i]) {
      dq.pop_back();
    }

    dq.push_back(i);

    if (i >= k - 1) {
      ans.push_back(nums[dq.front()]);
    }
  }

  return ans;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N, K;
    cin >> N >> K;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    vector<int> result = slidingWindowMaximum(arr, K);
    for (int i = 0; i < result.size(); i++) {
      cout << result[i];
      if (i != result.size() - 1) {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
