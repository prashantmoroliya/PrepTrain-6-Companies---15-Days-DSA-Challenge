#include <iostream>
#include <vector>

using namespace std;

// ignore this function...
bool knows(int A, int B) {
    // Implementation of knows function (assume it's provided)
    return true; // Replace this with the actual implementation
}

// only copy this function...
int findCelebrity(int n) {
    int candidate = 0; // Start with the first person as a potential candidate
    
    // Find the potential celebrity
    for (int i = 1; i < n; ++i) {
        if (knows(candidate, i)) {
            candidate = i; // Update the candidate if the current person knows the candidate
        }
    }
    
    // Validate the candidate
    for (int i = 0; i < n; ++i) {
        if (i != candidate && (knows(candidate, i) || !knows(i, candidate))) {
            return -1; // The candidate is not a celebrity
        }
    }
    
    return candidate; // Return the potential celebrity
}


// ignore this function...
int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int n;
        cin >> n; // Number of people in the party

        // Process the test case
        int celebrity = findCelebrity(n);
        cout << celebrity << endl;
        
        // Handle the calls to 'knows' function (as described in sample test cases)
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int val;
                cin >> val; // Simulate the 'knows' function calls
                // Use 'val' as needed, assuming it represents true/false or 0/1
            }
        }
    }

    return 0;
}

