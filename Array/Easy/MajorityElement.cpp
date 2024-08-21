class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int count = 1;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==candidate){
                count++;
            }
            else{
                count--;
                if(count==0){
                    candidate=nums[i];
                    count =1;
                }
            }
            
        }
        count = 0;
        for(int num:nums){
            if(candidate==num){
                count++;
            }
        }
        if(count>n/2){
            return candidate;
        }
        else{
            return -1;
        }
    }
};
// BOYER's MOORE ALGORITHM