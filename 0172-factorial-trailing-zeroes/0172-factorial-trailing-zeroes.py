class Solution:
    def fact(self, n:int) -> int:
        if n == 0:
            return 1
        return n * self.fact(n - 1)

    def trailingZeroes(self, n: int) -> int:
        f = self.fact(n)
        count = 0
        while f%10 ==0:
            count+=1
            f //=10
        return count