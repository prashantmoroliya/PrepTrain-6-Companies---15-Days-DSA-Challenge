# Valid Parentheses

## Problem Statement

You're given a string 'S' consisting of "{", "}", "(", ")", "[", and "]".

Return true if the given string 'S' is balanced, else return false.

For example:
`S = "{}()"`

There is always an opening brace before a closing brace, i.e., '{' before '}', '(' before ')'.

So 'S' is Balanced.

### Detailed explanatiion:
#### Input Format:

The first and only input line contains a string 'S'.

#### Output Format:

The output should be 'Balanced' or 'Not Balanced'.

#### Note:
You are not required to print anything explicitly. It has already been taken care of. Just implement the given function.

```
Sample Input 1 :

[()]{}{[()()]()}

Sample Output 1 :

Balanced

Explanation Of the Sample Input 1 :

There is always an opening brace before a closing brace i.e. '{' before '}', '(' before '), '[' before ']'.
So the 'S' is Balanced.

Sample Input 2 :

[[}[

Sample Output 2 :

Not Balanced

Constraints:

1 <= 'N' <= 10^5

Where 'N' is the length of the input string 'S'.
Time Limit: 1 sec
```

**Complete the following C+ function:**
```c++
bool isValidParenthesis(string s)
{
    // Write your code here.
}
```




