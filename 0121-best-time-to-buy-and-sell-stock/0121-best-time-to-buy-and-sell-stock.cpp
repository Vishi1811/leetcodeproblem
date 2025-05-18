class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=prices[0];
        int profit=0;
        for(int i=0;i<n;i++)
        {
            buy=min(buy,prices[i]);
            int curr_profit=prices[i]-buy;
            profit=max(profit,curr_profit);
        }
        return profit;

    }
};