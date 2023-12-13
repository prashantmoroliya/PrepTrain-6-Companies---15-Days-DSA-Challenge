#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// copy this only;
vector<int> nextGreaterElement(vector<int> &arr, int n) {
  vector<int> ans(n);
  stack<int> s;

  for (int i = n - 1; i >= 0; i--) {
    while (!s.empty() && arr[i] >= s.top()) {
      s.pop();
    }

    if (!s.empty()) {
      ans[i] = s.top();
    } else {
      ans[i] = -1;
    }

    s.push(arr[i]);
  }

  return ans;
}

// ignore this;
int main() {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  vector<int> result = nextGreaterElement(arr, n);

  for (int i = 0; i < n; i++) {
    cout << result[i] << " ";
  }
  cout << endl;

  return 0;
}
