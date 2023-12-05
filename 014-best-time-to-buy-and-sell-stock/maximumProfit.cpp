#include <bits/stdc++.h>

using namespace std;

// copy this....
int maximumProfit(vector<int> &prices) {
    int n = prices.size();
    int min_price = prices[0];
    int max_profit = 0;

    for(int i = 1; i < n; i++) {
        if(prices[i] < min_price)
            min_price = prices[i];
        else if(prices[i] - min_price > max_profit)
            max_profit = prices[i] - min_price;
    }
    return max_profit;
}


// ignore this...
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> prices(N);

        for (int i = 0; i < N; i++) {
            cin >> prices[i];
        }

        int result = maximumProfit(prices);
        cout << result << endl;
    }

    return 0;
}




