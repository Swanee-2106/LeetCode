class Solution(object):
    def twoSum(self, nums, target):
        result = [0,0]
        for i in range(len(nums)):
            for j in range(len(nums)):
                if(i != j and nums[i]+nums[j]==target):
                    result[0] = i
                    result[1] = j
        return result
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        