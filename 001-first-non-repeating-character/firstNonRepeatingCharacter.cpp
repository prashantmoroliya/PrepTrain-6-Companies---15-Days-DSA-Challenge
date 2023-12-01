#include <bits/stdc++.h> 
using namespace std;

// you only need to solve this function
char firstNonRepeatingCharacter(string str) {
    unordered_map<char, int> count; // Map to store character count
    
    // Count occurrences of each character in the string
    for (char c : str) {
        count[c]++;
    }
    
    // Find the first character with a count of 1
    for (char c : str) {
        if (count[c] == 1) {
            return c; // Return the first non-repeating character
        }
    }
    
    // If no non-repeating character found, return the first character of the string
    return str[0];
}

// don't type this main function in coding ninja challenge.
int main() {
    int T;
    cin >> T; // Number of test cases
    
    while (T--) {
        string input;
        cin >> input; // Input string
        
        // Find and print the first non-repeating character for each test case
        cout << firstNonRepeatingCharacter(input) << endl;
    }
    
    return 0;
}

