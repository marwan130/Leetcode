class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int maxProfit = 0;

        for(int right = 0; right < prices.size(); right++) {
            if(prices[right] < prices[left]) {
                left = right;
            }
            maxProfit = max(maxProfit, prices[right] - prices[left]);
        }
        return maxProfit;
    }
};