#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
  int mX = 0;             // to store length of longest consecutive sequence;
  unordered_set<int> set; // to store all the unique elements of array;

  for (int i = 0; i < n; i++) {
    set.insert(arr[i]);
  }

  for (int i = 0; i < n; i++) {
    int previousConsecutiveElement = arr[i] - 1;

    if (set.find(previousConsecutiveElement) == set.end()) {
      int j = arr[i]; // arr[i] is the first value of consecutive sequence;

      while (set.find(j) != set.end()) {
        j++; // the next consecutive element will be j+1;
      }

      mX =
          max(mX, j - arr[i]); // update maximum length of consecutive sequence.
    }
  }

  return mX;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    int result = lengthOfLongestConsecutiveSequence(arr, N);
    cout << result << endl;
  }

  return 0;
}
