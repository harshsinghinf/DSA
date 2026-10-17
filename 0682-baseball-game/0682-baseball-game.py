class Solution:
    def calPoints(self, operations: list[str]) -> int:
        stack = []
        sum = 0
        for x in operations:
            if x=='+':
                temp = stack[-1]+stack[-2]
                stack.append(temp)
                sum += temp
            elif x=='D':
                temp = stack[-1]*2
                stack.append(temp)
                sum+=temp
            elif x=='C':
                temp = stack.pop()
                sum -= temp
            else:
                temp = int(x) 
                stack.append(temp)
                sum += temp
        return sum



