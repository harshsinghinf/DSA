class Solution:
    def gcdStrings(self, s: str, t: str) -> str:
        if len(s)<len(t):
            return self.gcdStrings(t,s)
        
        if not s.startswith(t):
            return ""
        
        if t == "":
            return s

        return self.gcdStrings(s[len(t):],t)

    def gcdOfStrings(self, str1: str, str2: str) -> str:
        return self.gcdStrings(str1,str2)        


        