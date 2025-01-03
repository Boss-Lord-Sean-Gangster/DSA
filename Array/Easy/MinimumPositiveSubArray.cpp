class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int minimum = INT_MAX;
        for(int i=0; i<n;i++){
            int currSum =0;
            for(int j=i;j<n;j++){
                currSum+=nums[j];
                int length = j-i+1;
                if(length>=l && length<=r && currSum>0){
                    minimum = min(minimum,currSum);
                }
            }
        }
        return minimum==INT_MAX ? -1:minimum;
    }
};