class Solution:
    def numberOfPairs(self, nums1: List[int], nums2: List[int], k: int) -> int:
        length1 = len(nums1)
        length2 = len(nums2)
        answer=0
        for i in range(length1):
            for j in range(length2):
                if (nums1[i])%(nums2[j]*k)==0:
                    answer = answer+1
        return answer            