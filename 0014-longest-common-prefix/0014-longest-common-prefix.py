class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        res = ""
        n = min(len(st) for st in strs)
        for i in range(n):
            for st in strs:
                if len(res)==i:
                    res+=st[i]
                    continue
                if st[i]!=res[i]:
                    res = res[:-1]
                    return res
        return res