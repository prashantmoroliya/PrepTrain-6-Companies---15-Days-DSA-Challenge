The problem requires finding the maximum profit that can be achieved by buying and selling a stock only once. Here's a detailed explanation of the solution:

### Approach:

1. **Initialize Variables:**
   - `min_price`: Initialize it with the first element of the prices array. This will keep track of the minimum price encountered so far.
   - `max_profit`: Initialize it to 0. This will store the maximum profit that can be made.

2. **Iterate Through Prices:**
   - Loop through the prices starting from the second element (`i = 1`) to the end of the array.
   - For each price:
     - Check if the current price is less than `min_price`.
       - If it is, update `min_price` to the current price. This means a potentially lower buying price has been found.
     - If the current price is not less than `min_price`, calculate the profit that could be made if the stock is sold at this price.
       - Update `max_profit` if this profit is greater than the current maximum profit.

3. **Return `max_profit`:** Once the loop finishes, return the `max_profit` obtained. This value represents the maximum profit that can be achieved by buying and selling the stock once.

### Detailed Explanation:

- We start by initializing `min_price` as the first price and `max_profit` as 0.
- Then, we iterate through the prices array from the second element onward.
- For each price, we check if it's less than the `min_price`. If it is, we update `min_price` because this could potentially be a better buying price.
- If the current price is not less than `min_price`, we calculate the profit that could be made if the stock is sold at this price (`prices[i] - min_price`).
- We update `max_profit` if the calculated profit is greater than the current `max_profit`. This ensures we keep track of the maximum profit achievable.
- Finally, once the loop finishes, `max_profit` will contain the maximum profit that can be made by buying and selling the stock once.

This approach efficiently finds the maximum profit while iterating through the prices array only once, making it a linear time solution (`O(N)`), where `N` is the number of elements in the prices array.