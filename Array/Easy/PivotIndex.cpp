class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int totalSum =0;
       int leftSum = 0;
       int n = nums.size();
       for(int num:nums){
          totalSum+=num;
       }
       for(int i=0; i<n;i++){
        if(leftSum== totalSum - leftSum - nums[i]){
            return i;
        }
        leftSum+=nums[i];
       }
       return -1;
    }
};