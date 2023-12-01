1. Header Files and Namespace
---
```c++
#include <bits/stdc++.h> 
using namespace std;
```

- ``#include <bits/stdc++.h>`` is a commonly used header file that includes most standard libraries.
- `using namespace std;` allows the program to use elements from the std (Standard Library) namespace without explicitly specifying it.

2. Function ```firstNonRepeatingCharacter```
---
```c++
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
```

- This function takes a string `str` as input and returns the first non-repeating character in the string.
- It uses an `unordered_map<char, int>` called `count` to store the count of each character in the string.
- It iterates through the input string to count the occurrences of each character.
- Then, it iterates through the string again and returns the first character with a count of 1 (indicating it's not repeated).
- If no non-repeating character is found, it returns the first character of the string.

3. ```main()``` Function
---
```c++
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
```

- The `main()` function reads the number of test cases (`T`) from the input.
- It then enters a loop where for each test case, it reads an input string using `cin`.
- For each input string, it calls the `firstNonRepeatingCharacter()` function to find the first non-repeating character and prints it.

The program's logic involves iterating through each character in a string, counting their occurrences, and then identifying and returning the first character that does not repeat. If no such character exists, it returns the first character of the input string.


