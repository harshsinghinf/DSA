class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        for i, num in enumerate(nums):
            temp = target-num
            if temp in nums[i+1:]:
                return [i, nums[i+1:].index(temp)+i+1]