class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;

        for(int i = 0; i < prices.size(); i++){
            int current_profit = 0;
            for(int j = i + 1; j < prices.size(); j++){
                if(prices[i] > prices[j]) break;
                
                current_profit = prices[j] - prices[i];

                max_profit = max(max_profit, current_profit);
            }
        }
        return max_profit;
    }
};
