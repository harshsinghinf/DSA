class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for ch in s:
            if ch=='{' or ch=='(' or ch=='[':
                stack.append(ch)
            else:
                if len(stack)==0:
                    return False
                temp = stack.pop()
                if (ch==')' and temp!='(') or (ch=='}'and temp!='{') or (ch==']'and temp!='['):
                    return False
        if len(stack)>0:
            return False
        return True
