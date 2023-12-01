#include <bits/stdc++.h>
using namespace std;

// write this function only...
vector<int> maximumsumSubarray(vector<int> &arr, int n) {
    int max_sum = INT_MIN;
    int curr_sum = 0;
    int start = 0, end = 0;
    int curr_start = 0;
    
    for (int i = 0; i < n; ++i) {
        curr_sum += arr[i];
        
        if (curr_sum > max_sum) {
            max_sum = curr_sum;
            start = curr_start;
            end = i;
        }
        
        if (curr_sum < 0) {
            curr_sum = 0;
            curr_start = i + 1;
        }
    }
    
    vector<int> result;
    for (int i = start; i <= end; ++i) {
        result.push_back(arr[i]);
    }
    
    return result;
}

// ignore this...
int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        
        vector<int> subarray = maximumsumSubarray(arr, n);
        
        // Check if the returned subarray is correct or not
        int sum = accumulate(subarray.begin(), subarray.end(), 0);
        if (sum > 0) {
            if (subarray.size() > 0) {
                cout << "1\n";
            } else {
                cout << "0\n";
            }
        } else {
            cout << "0\n";
        }
    }
    return 0;
}

