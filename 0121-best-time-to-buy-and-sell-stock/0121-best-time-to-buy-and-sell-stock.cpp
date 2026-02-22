class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1) {
            return 0;
        }

        int maxProfit = 0, buy = INT_MAX;

        for(int price : prices) {
            if(price < buy) {
                buy = price;
            }
            else {
                maxProfit = max(maxProfit, price - buy);
            }
        }
        return maxProfit;
    }
};