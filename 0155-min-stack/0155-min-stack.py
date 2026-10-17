class MinStack:
    def __init__(self):
        self.stack = [(None, float('inf'))]
    def push(self, value: int) -> None:
        self.stack.append((value, min(value, self.stack[-1][1])))
    def pop(self) -> None:
        tup = self.stack.pop()
        return int(tup[0])
    def top(self) -> int:
        return self.stack[-1][0]
    def getMin(self) -> int:
        return self.stack[-1][1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(value)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()