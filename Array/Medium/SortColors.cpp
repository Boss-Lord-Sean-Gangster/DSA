class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0;
        int n = nums.size();
        int blue=n-1;
        int index =0 ;
        while(index<=blue){
           if(nums[index]==0){
            swap(nums[index],nums[red]);
            red++;
            index++;
           }
           else if(nums[index]==2){
            swap(nums[index],nums[blue]);
            blue--;
           }
           else{
            index++;
           }
        }
        
        

    }
};
