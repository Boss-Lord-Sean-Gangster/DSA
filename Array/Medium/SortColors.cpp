class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0;
        int white=1;
        int size = nums.size();
        for(int index=0;index<size;index++){
            if(nums[index]==0){
               swap(nums[index],nums[red]);
               red++;
            }
            if(nums[index]==1){
                swap(nums[index],nums[white]);
                white++;
            }
        }

    }
};