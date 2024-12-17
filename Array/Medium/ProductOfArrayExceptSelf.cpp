class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n,1);
        int left = 1;
        for(int i=0;i<n;i++){
            result[i]*= left;
            left*= nums[i];
        }
        int right = 1;
        for(int i=n-1; i>=0; i--){
            result[i]*=right;
            right*= nums[i];
        }
        return result;
    }
};

// In this we needed to find the product of the arry except the only element that we currently are on which means we have to give the array of the product values that contains product of all the elements except the element on which index its on . To do that we can simply have putted a double for loop but the condition stated we needed to do it in o(n) complexity . To do that we can simply initialise a vector as the same size of the original array with all the values as 1 then we can have two variables left and right and also initialise them with value 1 why are we doing this well basically we need to find the product of prefixes and suffixes values of the current array element right therefore we take left and right as 1 and then we simply start multiplyingg from left and right till we reach the current index . So lets say we are on index 1 so we need to then find the product of elements of index 0 which is prefix and the elemts from the last index to just before the current index which in this case is 1 . therefore we start multiplying from the start and the end and take two loops to do so . And just like that we have our output result . 
