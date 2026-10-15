class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        nums.sort()
        res = []

        for i in range(1, len(nums)):
            prev = nums[i - 1]
            curr = nums[i]

            for num in range(prev + 1, curr):
                res.append(num)

        return res