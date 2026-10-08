class Solution:
    def zeroFilledSubarray(self, nums: list[int]) -> int:
        ans = 0
        zeros = 0
        for num in nums:
            if num == 0:
                zeros += 1
                ans += zeros
            else:
                zeros = 0
        return ans