class Solution:
    def isValid(self, s: str) -> bool:
        result = []
        pairs = {')': '(', ']': '[', '}': '{'}

        for ch in s:
            if ch in pairs:
                if not result or result.pop() != pairs[ch]:
                    return False
            else:
                result.append(ch)

        return len(result) == 0