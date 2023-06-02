class Solution:
    def isUgly(self, n: int) -> bool:
        t = n
        if t == 0:
            return False
        for i in [2,3,5]:
            while t%i == 0:
                t/=i
            if t == 1:
                return True
