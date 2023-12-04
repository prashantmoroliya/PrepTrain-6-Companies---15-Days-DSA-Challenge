### Problem Overview
The task is to reverse the words in a given string while handling multiple spaces between words and ensuring there are no leading or trailing spaces in the reversed string.

### Solution Approach
The solution `reverseString` function aims to reverse the words in the input string by following these steps:

1. **Handling Empty String:** If the input string is empty, the function returns an empty string as there are no words to reverse.
   
2. **Reverse the Entire String:** Initially, the entire input string is reversed using the `reverse()` function from the `<algorithm>` library. This step ensures that the words are positioned in reverse order.

3. **Word Reversal:**
   - `wordStart` and `wordEnd` indices are used to track the start and end positions of each word.
   - A boolean variable `inWord` is used to determine whether the current character is within a word.
   - The loop iterates through the reversed string:
     - When encountering the start of a new word (a non-space character) and `inWord` is `false`, it marks the beginning of a word.
     - When encountering a space after a word and `inWord` is `true`, it identifies the end of the current word.
     - The `reverseWordsHelper` function reverses the identified word in-place using the `start` and `end` indices.
   
4. **Handling the Last Word:** If the loop ends with `inWord` being `true`, it means the last word wasn't followed by a space. Thus, the `reverseWordsHelper` is applied to the last word.

5. **Removing Extra Spaces:** A final loop is used to remove any extra spaces. It copies characters from the string while ensuring there's only one space between words by checking the current character and the previous one.

6. **Returning the Result:** The modified input string (`str`) is returned as the reversed string.

### Input and Output Handling
The `main()` function reads a string input, calls the `reverseString` function, and then outputs the reversed string.

### Time Complexity
- Reversing the string takes O(N) time.
- Reversing individual words takes O(N) time.
- Removing extra spaces takes O(N) time.
  
Overall, the time complexity is O(N), where N is the length of the input string.

This solution uses in-place operations to reverse words and manages space efficiently without using extra memory beyond the input string.







