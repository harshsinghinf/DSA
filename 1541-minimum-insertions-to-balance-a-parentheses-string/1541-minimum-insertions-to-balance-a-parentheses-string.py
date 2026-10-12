
class Solution:
    def minInsertions(self, s: str) -> int:
        open = 0
        insertions = 0

        i = 0
        while i < len(s):
            if s[i] == '(':
                open += 1
                i += 1
            else:
                # We need two consecutive closing parentheses.
                if i + 1 < len(s) and s[i + 1] == ')':
                    i += 2
                else:
                    # Insert a missing closing parenthesis.
                    insertions += 1
                    i += 1

                if open > 0:
                    open -= 1
                else:
                    # Insert a missing opening parenthesis.
                    insertions += 1

        # Each unmatched '(' needs two ')'.
        insertions += open * 2

        return insertions
