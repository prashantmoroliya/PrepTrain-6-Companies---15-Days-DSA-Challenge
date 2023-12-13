#include <iostream>
#include <vector>
using namespace std;

// copy this function only...
double median(vector<int> &a, vector<int> &b) {
  if (a.size() > b.size())
    swap(a, b);

  int n = a.size();
  int m = b.size();
  int low = 0;
  int high = n;

  while (low <= high) {
    int mid = (low + high) / 2;
    int part = (n + m + 1) / 2 - mid;

    if (part > m) {
      low = mid + 1;
      continue;
    }

    int leftMax = 0;
    int rightMin = 1e9 + 1;

    if (mid > 0)
      leftMax = max(leftMax, a[mid - 1]);
    if (part > 0)
      leftMax = max(leftMax, b[part - 1]);
    if (mid < n)
      rightMin = min(rightMin, a[mid]);
    if (part < m)
      rightMin = min(rightMin, b[part]);

    if (leftMax <= rightMin) {
      if ((n + m) & 1)
        return leftMax;
      return (leftMax + rightMin) / 2.0;
    }

    if (a[mid] < leftMax) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1;
}

// ignore this;
int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }

  double result = median(a, b);
  cout << result << endl;

  return 0;
}
