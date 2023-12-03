#include <iostream>
#include <unordered_map>
using namespace std;

// copy this only...
long long pairsWithGivenSum(int arr[], int n, int sum) {
    unordered_map<int, int> freqMap;
    long long count = 0;

    for (int i = 0; i < n; ++i) {
        int complement = sum - arr[i];
        count += freqMap[complement];
        freqMap[arr[i]]++;
    }

    return count;
}

// ignore this...
int main() {
    int n, sum;
    cin >> n >> sum;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << pairsWithGivenSum(arr, n, sum) << endl;
    return 0;
}

