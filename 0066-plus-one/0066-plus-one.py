class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        dig = list(map(str,digits))
        res = []
        s = ""
        for i in dig:
            s += i
        x = int(s)
        x = x+1
        s = str(x)
        for i in s:
            res.append(i)
        res1=list(map(int,res))
        return res1
