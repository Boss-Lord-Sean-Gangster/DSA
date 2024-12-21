class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minLen = INT_MAX;
        int left = 0;
        int curSum = 0;
        for(int i=0;i<n;++i){
            curSum+=nums[i];
            while(curSum>=target){
                if(i-left+1<minLen){
                    minLen = i-left+1;
                }
                curSum-=nums[left];
                left++;
            }
        }
        if (minLen == INT_MAX){
            minLen =0;
        }
        else{
            minLen= minLen;
        }
        return minLen;
    }
};