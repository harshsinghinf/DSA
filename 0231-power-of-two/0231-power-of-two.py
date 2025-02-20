class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        count = 1
        while(n>1 and count<=1):
            r = n//2
            n = n/2
            if r==1:
                count+=1
        return True if n == 1 else False
