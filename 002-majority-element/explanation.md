1. Header Files and Namespace
---
```c++
#include <bits/stdc++.h> 
using namespace std;
```

- ``#include <bits/stdc++.h>`` is a commonly used header file that includes most standard libraries.
- `using namespace std;` allows the program to use elements from the std (Standard Library) namespace without explicitly specifying it.

2. Function ```findMajorityElement```
---
```c++
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

```

- The function `findMajorityElement` takes an array of integers (`arr`) and its size `n` as arguments.
- It uses an `unordered_map<int, int>` called `frequency` to store the frequency of each element in the array.
- It iterates through the array and counts the occurrences of each element.
- Then, it checks within the map if any element's frequency is greater than half of the array size. If found, it returns that element (the majority element). If not, it returns -1, indicating no majority element was found.


3. ```main()``` Function
---
```c++
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
```

- The `main()` function reads the number of test cases (`T`) from the input.
- For each test case, it reads the size of the array (`n`) and then the elements of the array.
- It calls the `findMajorityElement()` function for each array and prints the majority element found (or -1 if not found).

This program's purpose is to identify the majority element in each array within the given test cases. The majority element is defined as the element that appears more than n/2 times in an array of size n.


