//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

int maxProfit(vector<int>& prices) {
       int i, profit=0,minprice=INT_MAX;
        for(i=0;i<prices.size();i++)
        {
            minprice=min(minprice,prices[i]);
            profit=max(profit,prices[i]-minprice);
        }
        return profit;
}