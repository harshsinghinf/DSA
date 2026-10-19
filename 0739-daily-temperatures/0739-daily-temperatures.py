
class Solution:
    def dailyTemperatures(self, temperatures: list[int]) -> list[int]:
        res = [0] * len(temperatures)
        stack = []

        for i, temp in enumerate(temperatures):
            while stack and stack[-1][0] < temp:
                _, prev_index = stack.pop()
                res[prev_index] = i - prev_index

            stack.append((temp, i))

        return res
