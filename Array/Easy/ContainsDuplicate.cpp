class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       bool result = false;
       int n = nums.size();
       for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]){
                result = true;
            }
        }
       } 
       return result;
    }
};