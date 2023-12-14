#include <iostream>
using namespace std;

// copy this function;
int search(int *arr, int n, int key) {
  int start = 0;
  int end = n - 1;

  while (start <= end) {
    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
      return mid;
    else if (arr[mid] >= arr[start]) {
      if (arr[start] <= key && key <= arr[mid])
        end = mid - 1;
      else
        start = mid + 1;
    } else {
      if (arr[end] >= key && key >= arr[mid])
        start = mid + 1;
      else
        end = mid - 1;
    }
  }

  return -1;
}

// ignore this function;
int main() {
  int n;
  cin >> n;

  int *arr = new int[n];
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  int q;
  cin >> q;

  for (int i = 0; i < q; ++i) {
    int query;
    cin >> query;
    int result = search(arr, n, query);
    cout << result << endl;
  }

  delete[] arr;
  return 0;
}
