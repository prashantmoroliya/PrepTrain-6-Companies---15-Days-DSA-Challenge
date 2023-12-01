#include <bits/stdc++.h>
using namespace std;

// just complete the function to score 
int findMajorityElement(int arr[], int n) {
    unordered_map<int, int> frequency;
    
    // Count the frequency of each element in the array
    for (int i = 0; i < n; ++i) {
        frequency[arr[i]]++;
    }
    
    // Find the majority element
    for (auto it = frequency.begin(); it != frequency.end(); ++it) {
        if (it->second > n / 2) {
            return it->first; // Return the majority element
        }
    }
    
    return -1; // No majority element found
}

// don't write main 
int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        int arr[n];
        
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        
        int majorityElement = findMajorityElement(arr, n);
        cout << majorityElement << endl;
    }
    
    return 0;
}

