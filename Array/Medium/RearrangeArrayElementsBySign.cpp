class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int>positive;
       vector<int>negative;
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]>0){
                positive.push_back(nums[i]);
            }
            else if(nums[i]<0){
                negative.push_back(nums[i]);
            }
        }
        int n1 = positive.size();
        int n2 = negative.size();
        vector<int>result;
        int pos_index = 0;
        int neg_index =0 ;
        while(pos_index< n1 && neg_index<n2){
            result.push_back(positive[pos_index]);
            pos_index++;
            result.push_back(negative[neg_index]);
            neg_index++;
        }
        return result;
    }
};