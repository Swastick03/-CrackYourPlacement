class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        int s = sum;
        for(int i=k-1;i>=0;i--){
            s-=cardPoints[i];
            s+=cardPoints[cardPoints.size()-k+i];

            sum = max(sum,s);
        }
        return sum;
    }
};