# Reverse Words In A String 

You are given a string 'str' of length 'N'. <br>

Your task is to reverse the original string word by word. <br> 

There can be multiple spaces between two words and there can be leading or trailing spaces, but in the output reversed string, you need to put a single space between two words, and your reversed string should not contain leading or trailing spaces.

#### Example:

If the given input string is "Welcome to Coding Ninjas", then you should return "Ninjas Coding to Welcome" as the reversed string has only a single space between two words and there is no leading or trailing space.

### Detailed Explanation:

#### Input Format:

The first line of input contains a string that you need to reverse word by word.

#### Output Format:

Print the reversed string such that there should be only one space between two strings, and there should not be any trailing space.

#### Note:

Do not print anything. It has already been taken care of.

If the string data type is immutable in your language, consider using a mutable data type as an alternative.

#### Constraints:

0 <= N <= 10^5
<br>
Time Limit: 1 sec

#### Follow-up:

If the string data type is mutable in your language, can you solve it in place with O(1) extra space?

```
Sample Input 1 :

Welcome to Coding Ninjas

Sample Output 1:

Ninjas Coding to Welcome

Explanation For Sample Input 1:

You need to reduce multiple spaces between two words to a single space in the reversed string and observe how the multiple spaces, leading and trailing spaces have been removed.

Sample Input 2 :

I am a star

Sample Output 2:

star a am I

Explanation For Sample Input 2:

Your reversed string should not contain leading or trailing spaces.

Constraints :

0 <= N <= 10^5

Time Limit: 1 sec

Follow-up:

If the string data type is mutable in your language, can you solve it in place with O(1) extra space?

```

### Function Signature:

```cpp
string reverseString(string &str) {
    // Write your code here.
}
```




