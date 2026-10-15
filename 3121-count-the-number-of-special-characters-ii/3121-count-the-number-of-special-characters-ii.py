
class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        count = 0
        diff = {char.lower(): [[], -1] for char in word}

        for i, char in enumerate(word):
            if char in string.ascii_lowercase:
                diff[char.lower()][0].append(i)
            else:
                if diff[char.lower()][1] == -1:
                    diff[char.lower()][1] = i

        for key, value in diff.items():
            if value[0] and value[1] != -1 and all(i < value[1] for i in value[0]):
                count += 1

        return count
