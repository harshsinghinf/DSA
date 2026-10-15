class Solution:
    def mapWordWeights(self, words: List[str], weights: List[int]) -> str:
        alpha_hashmap = dict(zip(string.ascii_lowercase, weights))
        res = ""
        for word in words:
            sum1 = 0 
            for ch in word:
                sum1 += weights[ord(ch)-ord('a')]
            res += chr(ord('z') - sum1%26)
        return res


