class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int s = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[s]<prices[i]){
                maxi+=(prices[i]-prices[s]);
            }
            s = i;
        }
        return maxi;
    }
};