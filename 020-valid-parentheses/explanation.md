Code aims to check if a given string of parentheses is balanced or not.

Here's a detailed explanation of the solution:

### Function `isValidParenthesis`:
- **Parameters**: `string s` - Represents the input string containing parentheses.
- **Return Type**: `bool` - Returns `true` if the parentheses in the string are balanced; otherwise, returns `false`.

#### Steps:
1. **Initialization**: Initialize a variable `balance` to keep track of the balance of parentheses. This variable will be incremented for each opening bracket and decremented for each closing bracket encountered in the string.

2. **Iteration through the String**:
   - For each character `bracket` in the input string `s`, perform the following:
     - If `bracket` is an opening bracket ('(', '[', '{'), increment the `balance` variable to keep track of the count of opening brackets encountered.
     - If `bracket` is a closing bracket (')', ']', '}'):
       - If `balance` is `0`, it means there is no corresponding opening bracket for this closing bracket, hence the string is not balanced, and the function returns `false`.
       - Otherwise, check if the last encountered opening bracket (corresponding to the current closing bracket) matches the type. If not, return `false`.

     _Note: The matching of opening and closing brackets is done by checking the last encountered character in the string by decrementing the `balance` variable._

3. **Final Check**:
   - After iterating through the entire string, check if the `balance` is `0`. If it is `0`, it indicates that all opening brackets had corresponding closing brackets, and the string is balanced. Return `true`; otherwise, return `false`.

### `main()` Function:
- Takes input string from the user using `cin`.
- Calls the `isValidParenthesis` function with the input string and checks the return value.
- Outputs `"Balanced"` if the parentheses are balanced; otherwise, outputs `"Not Balanced"`.

This code efficiently iterates through the string of parentheses, incrementing and decrementing a counter to ensure that each closing bracket corresponds to the correct opening bracket. If the balance is maintained till the end and the count becomes `0`, it means all opening brackets have been closed correctly, and the string is considered balanced. Otherwise, it's considered not balanced.





