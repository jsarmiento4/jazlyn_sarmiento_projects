import math
class Solution:
    # @param A : integer
    # @return an integer
    def isPalindrome(self, a):
        if a<0:
            return 0
        if a == 0:
            return 1
        
        n = int(math.log10(a)+1)
        digits = n
        
        while a > 0:
            last = a%10
            first = a//(10**(digits-1))
            if last != first:
                return 0
            a = a%(10**(digits-1))
            a = a//10
            digits -= 2
        
        return 1