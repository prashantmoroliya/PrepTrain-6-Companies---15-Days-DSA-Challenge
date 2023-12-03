## Problem Statement

You are given a string 'str' of length 'N'. Your task is to return the longest palindromic substring. If there are multiple strings, return any. A substring is a contiguous segment of a string.

For example:

Given `str = "ababc"`

The longest palindromic substring of "ababc" is "aba", since "aba" is a palindrome and it is the longest substring of length 3 which is a palindrome. There is another palindromic substring of length 3, "bab". Since the starting index of "aba" is less than "bab", "aba" is the answer.

**Detailed Explanation:**

**Input Format:**

The first line contains a string 'str'.

**Output Format:**

The output contains the size of the longest palindromic substring if that substring is the answer, else -1.

**Note:**

You do not need to print anything; it has already been taken care of. Just implement the given function.

**Follow up:**

Try to solve it using O(1) space complexity.


```
Sample Input 1:

abccbc

Sample Output 1:

bccb

Explanation for input 1:

For string "abccbc",  there are several palindromic substrings such as "a", "b", "c", "cc", "bccb", and "cbc". However, the longest palindromic substring is "bccb".

Sample Input 2:

aeiou

Sample Output 2:

a

Constraints :

1 <= |str| <= 10^3

Time Limit: 1 sec
```

C++ function to solve:
```c++
string longestPalinSubstring(string str) {
    // Write your code here.
}
```
