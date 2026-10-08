class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        stack = []
        res: str = ""
        flag:bool = False
        for s1 in s:
            if flag == True:
                res = res+s1
            if s1=='(':
                if len(stack)==0 or stack[-1]=='(':
                    flag = True
                    stack.append(s1)
            else:
                if stack[-1] == '(':
                    if len(stack)==1:
                        stack.pop()
                        res = res[0:-1]
                        flag = False
                    else: 
                        stack.pop()
        return res
                    
