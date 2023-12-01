# First non repeating character 

**Problem Statement**

Ninja is now bored with numbers and is now playing with characters but hates when he gets repeated characters. Ninja is provided a string, and he wants to return the first unique character in the string.The string will contain characters only from the English alphabet set, i.e., ('A' - 'Z') and ('a' - 'z'). If there is no non-repeating character, print the first character of the string. If there is no non-repeating character, return the first character of the string.

---

**Detailed Explanation:**
<br>
**Input Format:**
The first line contains a single integer T representing the number of test cases. 

The first and the only line of each test case will contain the input string.
<br><br>
**Output Format:**
For each test case, print a character denoting the first non-repeating character in the input string.
<br><br>
**Note:**
You do not need to print anything; it has already been taken care of. Just implement the given function. 

---

**Constraints:**
<br><br>
1 <= T <= 10 <br>
1 <= Length of Input String <= 10^4 <br>
<br>
Time Limit: 1 sec <br>
```
Sample Input 1 :

2
aDcadhc
AabBcC

Sample Output 1:

 D
 A

Explanation for Sample Input 1:

In the first test case, ‘a’ is repeated.’ D’ is the first non-repeating character in the string, so we return it.

In the second test case, all the characters are non-repeating, so we return the first character.

Sample Input 2 :

 2
 ABcd
 AAAbcdb

Sample Output 2:

 A
 c 
```

C++ function to solve
```c++
#include <bits/stdc++.h> 
char firstNonRepeatingCharacter(string str) {

  // Write your code here

}
```

