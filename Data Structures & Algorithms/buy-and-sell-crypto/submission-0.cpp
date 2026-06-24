class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int sell = prices[0];
        int buy = prices[0];
        int i =1;
        int n = prices.size();
        while(i<n){
            if(prices[i] < buy){
                buy = prices[i];
                sell = prices[i];
                i++;
            }
            else{
                sell = max(sell,prices[i]);
                profit = max (profit, sell-buy);
                i++;
            }
        }
        return profit;
    }
};
