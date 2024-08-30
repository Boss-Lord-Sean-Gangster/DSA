class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      vector<int>res ={-1,-1};
      int left = binarySearch(nums, target, false);
      int right = binarySearch(nums, target, true);
      res[0]=left;
      res[1]=right;
      return res;
    }
    int binarySearch(vector<int>& nums, int target, bool isSearchingRight){
        int n = nums.size();
        int s = 0;
        int e= n-1;
        int ans = -1;
        int mid = s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
                ans = mid;
            if(isSearchingRight){
                s=mid+1;
            }else{
                e=mid-1;
            }
            }
            else if(target>nums[mid]){
                s = mid+1;
            }
            else {
                e= mid-1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }
};