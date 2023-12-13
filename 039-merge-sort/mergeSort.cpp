#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

// only copy this;
void mergeSort(vector<int> &arr, int n) {
  int currentGap = 2;
  float nearestPowerTwo = log2(n);

  if (int(nearestPowerTwo) != (nearestPowerTwo))
    nearestPowerTwo = pow(2, int(nearestPowerTwo) + 1);
  else
    nearestPowerTwo = pow(2, int(nearestPowerTwo));

  int parts;

  while (currentGap <= nearestPowerTwo) {
    parts = n / currentGap;

    if (n % currentGap != 0)
      parts++;

    for (int i = 0; i < parts; i++) {
      int ptrLeft = i * currentGap;
      int copyLeft = ptrLeft;
      int end = (i + 1) * currentGap;
      int ptrRight = (ptrLeft + end) / 2;
      end = min(end, n);
      int copyRight = ptrRight;

      vector<int> mergeArr;

      while (ptrLeft <= copyRight && ptrRight < end) {
        if (arr[ptrLeft] > arr[ptrRight]) {
          mergeArr.push_back(arr[ptrRight]);
          ptrRight++;
        } else {
          mergeArr.push_back(arr[ptrLeft]);
          ptrLeft++;
        }

        if (ptrLeft == copyRight) {
          while (ptrRight != end) {
            mergeArr.push_back(arr[ptrRight]);
            ptrRight++;
          }
          break;
        }

        if (ptrRight == end) {
          while (ptrLeft != copyRight) {
            mergeArr.push_back(arr[ptrLeft]);
            ptrLeft++;
          }
          break;
        }
      }
      for (int i = 0; i < mergeArr.size(); i++)
        arr[copyLeft + i] = mergeArr[i];
    }
    currentGap *= 2;
  }
}

// ignore this;
int main() {
  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    vector<int> ARR(N);
    for (int i = 0; i < N; i++) {
      cin >> ARR[i];
    }

    mergeSort(ARR, N);

    for (int i = 0; i < N; i++) {
      cout << ARR[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
