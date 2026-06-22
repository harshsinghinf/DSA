from collections import Counter
class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        freq_map = Counter(text)
        maxCount = len(text)//7
        for char in "balloon":
            if char == "l" or char == "o":
                maxCount = min(maxCount, freq_map[char]//2)
            else: 
                maxCount = min(maxCount, freq_map[char])
        return maxCount
        