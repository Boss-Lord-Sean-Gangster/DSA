class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        for (int i = 0; i < n; ++i) {
            // int j = i;
            if (nums[i] > 0) {
                int j = (i + nums[i]) % n;
                result[i] = nums[j];
            } else if (nums[i] < 0) {
                int j = (i + nums[i]%n + n) % n;
                result[i] = nums[j];

            } else {
                result[i]=nums[i];
            }
        }
        return result;
    }
};