class Solution {
public:
    bool binarySearch(vector<int>& nums, int s, int e, int t){
        int mid = s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==t){
                return true;
            }
            else if (nums[mid]<t){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid = s+(e-s)/2;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int  n = matrix.size();
        // bool ans =false;
         for (int i = 0; i < n; i++) {
            // Use binary search on each row
            if (binarySearch(matrix[i], 0, matrix[i].size() - 1, target)) {
                return true;
            }
        }
        return false;
    }
};