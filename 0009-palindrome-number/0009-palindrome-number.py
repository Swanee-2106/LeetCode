class Solution:
    def isPalindrome(self, x: int) -> bool:
        s = str(x)
        st=0
        end=len(s)-1
        while st<end:
            if s[st]!=s[end]:
                return False
            st +=1
            end-=1

        return True