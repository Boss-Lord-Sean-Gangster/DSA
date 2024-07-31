class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        length = len(nums)
        result = 0
        for i in range(length):
            for j in range (i+1,length):
                if nums[i]==nums[j]:
                    result= result+1
        return result            
                    