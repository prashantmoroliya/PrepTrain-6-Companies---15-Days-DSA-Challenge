#include <bits/stdc++.h>
using namespace std;

// copy this function only...
vector<int> nextGreater(vector<int> &arr, int n) {
    vector<int> result(n, -1); // Initializing result array with -1
    stack<int> st;

    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; --i) {
        // Pop elements from stack smaller than current element
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }
        // If stack is not empty, the top element is the next greater element
        if (!st.empty()) {
            result[i] = st.top();
        }
        // Push current element to stack
        st.push(arr[i]);
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

