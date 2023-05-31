class Solution:
    def isPalindrome(self, s: str) -> bool:
        s= s.lower()
        s.strip()
        rev = ""
        for i in s:
            if i.isalnum():
                rev = rev + i
            else:
                pass
        if(rev == rev[::-1]):
            return True
        else:
            return False
