class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MIN, pre_sell = 0, sell = 0, pre_buy;

        for(int price: prices){
            pre_buy = buy;
            buy = max(pre_buy, pre_sell - price);

            pre_sell = sell;
            sell = max(pre_sell, pre_buy + price);
        }
        return sell;
    }
};


// buy[i] = max(buy[i-1], sell[i-2] - prices[i])
// sell[i] = max(sell[i-1], buy[i-1] + prices[i])

// prebuy = buy[i-1], buy = buy[i]
// presell = sell[i-1], sell = sell[i]
// for next time
// before update: buy[i-2], sell[i-2]
// after update before buy: buy[i-2] to buy[i-1]
// after update before sell: sell[i-2] to sell[i-1]
