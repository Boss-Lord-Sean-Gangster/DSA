class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n =nums.size();
        vector<int> answer(n);
        for (int index=0; index<n; index++){
            int newIndex = (index+k)%n;
            answer[newIndex]=nums[index];
        }
        nums=answer;
    }
<<<<<<< HEAD
};
=======
};
>>>>>>> da49ac613cfd53add992801504f287566973680f
