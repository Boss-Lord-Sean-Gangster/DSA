class Solution {
public:
    
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        int validSelection = 0;
        
        auto checkingSelection = [&](int start, int direction){
            vector<int> temp = nums;
            int curr = start;
            while(curr>=0 && curr<n){
                if(temp[curr]==0){
                    curr+=direction;
                }else{
                    temp[curr]--;
                    direction *= -1;
                    curr+=direction;
                }

            }
             return all_of(temp.begin(), temp.end(), [](int x) { return x == 0; });
        };
        for(int i=0;i<n;++i){
            if(nums[i]==0){
            if(checkingSelection(i,1)){
                validSelection++;
            }
             if(checkingSelection(i,-1)){
                validSelection++;
            }
        }
        }
        return validSelection;
    }
};