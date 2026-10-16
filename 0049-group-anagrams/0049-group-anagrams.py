
class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        groups = {}

        for word in strs:
            freq = [0] * 26

            for char in word:
                freq[ord(char) - ord('a')] += 1

            key = tuple(freq)
            groups.setdefault(key, []).append(word)

        return list(groups.values())
