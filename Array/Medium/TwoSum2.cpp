class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int n = numbers.size();
       int s= 0;
       int e = n-1;
       while(s<=e){
        int total = numbers[s]+numbers[e];
        if(total==target){
            return{s+1,e+1};
        }
        else if(total>target){
            e--;
        }
        else{
            s++;
        }
       }
       return{-1,-1};
    }

};