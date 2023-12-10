# Anagram Pairs

### Problem Statement
You are given two strings 'str1' and 'str2'. <!--here it is typo in the question but I fix here.-->

You have to tell whether these strings form an anagram pair or not.

The strings form an anagram pair if the letters of one string can be rearranged to form another string.

Pre-requisites:

Anagrams are defined as words or names that can be formed by rearranging the letters of another word. Such as "spar" can be formed by rearranging letters of "rasp". Hence, "spar" and "rasp" are anagrams. 

Other examples include:

'triangle' and 'integral' <br>
'listen' and 'silent' <br>

**Note:**
Since it is a binary problem, there is no partial marking. Marks will only be awarded if you get all the test cases correct. 

### Detailed explanation

#### Input Format:
The first and the only line of input contains two single space-separated strings Str1 and Str2, respectively.

#### Output Format:
The only line of output contains either True or False. True, if the given two strings form an anagram pair and False otherwise.

You don't have to explicitly print by yourself. It has already been taken care of.

#### Remember/Consider:
Neither of the two input strings contains spaces in between, except to differentiate one from the other.

Also, both the strings will be in lowercase characters.   

```
Sample Input 1:
rasp spar

Sample Output 1:
True

Explanation For Sample Output 1:
Since both the strings have one 'a', one 'p', one 'r', and one 's', they are anagrams.

Sample Input 2:
rasp spaz

Sample Output 2:
False

Constraints:
1 <= N <= 10^5 
1 <= M <= 10^5
Where N and M are the lengths of the strings str1 and str2 , respectively.

Time Limit: 1sec

Follow Up:
Can you solve this in O( N ) time?
```

**Complete the following C++ function:**
```c++
bool isAnagram(string str1, string str2) {
    //Write your code here
}
```


