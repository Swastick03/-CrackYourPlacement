class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int i=0;
      int j=0;
      
      int size=nums.size();
      for(i=0;i<size;i++){
          for(j=i+1;j<size;j++){
              if(nums[i]+nums[j]==target){
                  return {i,j};
              }
          }
      }  
      return {};
     
    }
};