#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// copy this function...
long long maxSubarraySum(vector<int> arr, int n) {
    long long max_so_far = 0;
    long long max_ending_here = 0;

    for(int i = 0; i < n; i++) {
        max_ending_here = max_ending_here + arr[i];
        if (max_ending_here < 0)
            max_ending_here = 0;
        else if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }

    return max_so_far;
}

// ignore this...
int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    long long result = maxSubarraySum(arr, n);
    cout << result << endl;

    return 0;
}


