class Solution:
    def processStr(self, s: str) -> str:
        result: str = ""
        for i, char in enumerate(s):
            if char == "*":
                temp_result = result[:-1]
                result = temp_result
            elif char == "#":
                result = result + result
            elif char == "%":
                result = result[::-1]
            else:
                result = result + char
        return result 

        