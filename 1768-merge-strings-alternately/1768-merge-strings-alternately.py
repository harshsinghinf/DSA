class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        m: int = len(word1)
        n: int = len(word2)
        x: int = max(m,n)
        res: str = ""
        for i in range(x):
            if i<m:
                res = res + word1[i]
            if i<n:
                res = res + word2[i]
        return (res)