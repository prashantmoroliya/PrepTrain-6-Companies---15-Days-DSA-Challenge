#include <iostream>
using namespace std;

// copy this function only...
string longestPalinSubstring(string str) {
    int maxLength = 1;  // Initialize the maximum length of palindrome as 1
    int start = 0;  // Initialize the starting index of the palindrome substring

    int len = str.length();

    int low, high;

    // One by one consider every character as center of even and odd length palindromes
    for (int i = 1; i < len; ++i) {
        // Find the longest even length palindrome with center points i-1 and i.
        low = i - 1;
        high = i;
        while (low >= 0 && high < len && str[low] == str[high]) {
            if (high - low + 1 > maxLength) {
                start = low;
                maxLength = high - low + 1;
            }
            --low;
            ++high;
        }

        // Find the longest odd length palindrome with center point i.
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < len && str[low] == str[high]) {
            if (high - low + 1 > maxLength) {
                start = low;
                maxLength = high - low + 1;
            }
            --low;
            ++high;
        }
    }

    if (maxLength == 1) {
        return str.substr(0, 1); // If no palindrome found, return the first character
    }

    return str.substr(start, maxLength);
}


// ignore this...
int main() {
    string str;
    cin >> str;

    string result = longestPalinSubstring(str);
    cout << result << endl;

    return 0;
}

