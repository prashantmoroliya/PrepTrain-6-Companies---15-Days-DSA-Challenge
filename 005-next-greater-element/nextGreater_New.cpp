#include <bits/stdc++.h>
using namespace std;

// copy this function only...
vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here
    vector<int> result(n);
    stack<int> s;
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        result[i] = s.empty() ? -1 : s.top();
        s.push(arr[i]);
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

        vector<int> result = nextGreater(arr, n);

        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

