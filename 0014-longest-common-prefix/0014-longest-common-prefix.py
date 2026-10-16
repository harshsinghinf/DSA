
class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        if not strs:
            return ""

        for i, char in enumerate(strs[0]):
            for st in strs[1:]:
                if i >= len(st) or st[i] != char:
                    return strs[0][:i]

        return strs[0]
