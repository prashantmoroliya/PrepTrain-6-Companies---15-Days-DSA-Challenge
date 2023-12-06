Solution utilizes a two-pointer approach to find the celebrity at a party with 'n' people.

### Two-Pointer Approach:
1. **Initialization**: We start by assuming the first person (with ID 0) as a potential celebrity candidate.
   
2. **Finding a Potential Celebrity**:
   - We iterate through the people from the second person (ID 1) to the last person (ID n-1).
   - For each person 'i', we check if the current candidate knows 'i' (using the `knows` function).
   - If the current candidate knows 'i', we update the candidate to 'i' because a celebrity would not know anyone. Therefore, the candidate cannot be a celebrity as they know someone ('i').

3. **Validation of Candidate**:
   - After finding a potential candidate, we validate this candidate.
   - We traverse through all the people (IDs 0 to n-1) again.
   - For each person 'i':
     - If 'i' is not the candidate and either the candidate knows 'i' or 'i' doesn't know the candidate, it means the candidate cannot be a celebrity. 
     - In such cases, we return -1 as there is no celebrity at the party.

4. **Return the Potential Celebrity**:
   - If the candidate passes the validation step, it implies that the candidate might be a celebrity, as they are not ruled out based on the checks.
   - Thus, we return the candidate as the potential celebrity.

### Complexity Analysis:
- **Time Complexity**: The solution makes two passes through the 'n' people in the party. Both passes involve 'n' iterations, resulting in a time complexity of O(n).
- **Space Complexity**: The solution uses only a constant amount of extra space, resulting in O(1) space complexity.

This approach optimally narrows down the potential celebrity candidate while minimizing the number of calls to the `knows` function, efficiently identifying the celebrity in a party setting with 'n' people.





