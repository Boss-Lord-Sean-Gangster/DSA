class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int buy_price =prices[0];
       int profit = 0;
       int n = prices.size();
       for (int i=0;i<n;i++){
        if(buy_price>prices[i]){
            buy_price=prices[i];
        }
        profit=max(profit,prices[i]-buy_price);
       } 
       return profit;        
    }
};