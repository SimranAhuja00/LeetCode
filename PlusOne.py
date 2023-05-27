class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        digits = digits[::-1] #reversing the array
        one = 1
        i = 0

        while one==1:
            if i < len(digits):
                if digits[i] == 9:
                    digits[i] = 0
                else:
                    one = 0
                    digits[i] = digits[i]  + 1
            else:
                digits.append(1)
                one = 0
            i = i + 1
        
        digits = digits[::-1]
        return digits
