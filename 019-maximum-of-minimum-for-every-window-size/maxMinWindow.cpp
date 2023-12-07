#include <iostream>
#include <limits> // Include for INT_MIN
#include <stack>
#include <vector>
using namespace std;

vector<int> maxMinWindow(vector<int> a, int n) {
  vector<int> next_smaller(n, n);
  vector<int> prev_smaller(n, -1);

  stack<int> next_smaller_stack;
  for (int i = n - 1; i >= 0; i--) {
    while (!next_smaller_stack.empty() && a[i] <= a[next_smaller_stack.top()])
      next_smaller_stack.pop();
    if (!next_smaller_stack.empty())
      next_smaller[i] = next_smaller_stack.top();
    next_smaller_stack.push(i);
  }

  stack<int> prev_smaller_stack;
  for (int i = 0; i < n; i++) {
    while (!prev_smaller_stack.empty() && a[i] <= a[prev_smaller_stack.top()])
      prev_smaller_stack.pop();
    if (!prev_smaller_stack.empty())
      prev_smaller[i] = prev_smaller_stack.top();
    prev_smaller_stack.push(i);
  }

  vector<int> answer(
      n, numeric_limits<int>::min()); // Using numeric_limits for INT_MIN
  for (int i = 0; i < n; i++) {
    int window_size = next_smaller[i] - prev_smaller[i] - 1;
    answer[window_size - 1] = max(answer[window_size - 1], a[i]);
  }

  for (int i = n - 2; i >= 0; i--)
    answer[i] = max(answer[i], answer[i + 1]);

  return answer;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    vector<int> result = maxMinWindow(a, n);
    for (int i = 0; i < n; ++i) {
      cout << result[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
