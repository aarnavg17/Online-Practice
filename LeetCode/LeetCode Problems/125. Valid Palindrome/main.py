class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        a = ""
        for x in s:
            if x.isalnum():
                a += x
        return a == a[::-1]
