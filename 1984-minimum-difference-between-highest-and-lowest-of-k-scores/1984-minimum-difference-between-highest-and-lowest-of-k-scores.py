class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        nums = sorted(nums)
        min_diff = nums[-1]-nums[0]
        for i,num in enumerate(nums):
            if(i+k-1==len(nums)):
                break
            min_diff = min(min_diff, nums[i+k-1]-num)
        return min_diff
