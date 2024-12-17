class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>temp;
        vector<int>result;
        for(int i=0; i<n;i++){
            for(int j=i+1; j<n;j++){
                int remaining = target - nums[i];
                if(nums[j]==remaining){
                    temp.push_back(i);
                    temp.push_back(j);
                }
            }
        }
        return temp;
    }
};