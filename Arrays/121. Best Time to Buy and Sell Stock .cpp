class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<minprice){
                minprice=prices[i];
            }
            else if(prices[i]-minprice>profit){
                profit=prices[i]-minprice;
            }
        }
        return profit;
        
    }
};