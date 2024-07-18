class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ansindex=0;
        int i=0;
        nums[ansindex]=nums[i];
        for(i=1; i<nums.size(); i++){
            if (nums[ansindex]!=nums[i]){
                nums[++ansindex]=nums[i];
                
            }
        }
        return ansindex+1;
        
    }
};