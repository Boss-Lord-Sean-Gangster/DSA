class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int n = nums.size();
     int sum = INT_MIN;
     for(int i=0;i<n;i++){
        int currSum =0;
        for(int j=i;j<n;j++){
            currSum+= nums[j];
            sum = max(sum, currSum);
        }
     }
     return sum;
    }
}
// THIS IS A WAY TO SOLVE THIS QUESTION BUT EVENTUALLY WILL EXCEED THE TIME LIMIT SINCE IT WORKS IN O(n2) time complexity