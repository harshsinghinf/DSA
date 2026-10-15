class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        ans = 0
        for ch in "abcdefghijklmnopqrstuvwxyz":
            lower = ch
            upper = ch.upper()
            if lower in word and upper in word:
                if word.rindex(lower) < word.index(upper):
                    ans +=1
        return ans