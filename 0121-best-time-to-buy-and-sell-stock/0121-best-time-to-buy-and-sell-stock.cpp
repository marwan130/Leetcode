class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minN = INT_MAX;
        int maxN = 0;

        for(int i = 0; i < prices.size(); i++) {
            minN = min(minN, prices[i]);
            if(prices[i] > minN) {
                maxN = max(maxN, prices[i] - minN);
            }
        }
        return maxN;
    }
};