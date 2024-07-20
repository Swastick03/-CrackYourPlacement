

class Solution {
public:
    int max(int a, int b){
    if (a>b) return a;
    
    return b;
    }
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int min_price= prices[0];

        for(int i=1; i< prices.size(); i++){
            if(min_price>prices[i]){
                min_price = prices[i];
            }
            else{
                int temp= prices[i]-min_price;
                maxi= max(maxi,temp);

            }

        }
        
        return maxi;
    }
};