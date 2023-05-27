class Solution:
    def isValid(self, s: str) -> bool:
        stack =[]
        map={")" : "(" , "}" : "{", "]" : "["}

        for char in s:
            if char in map:
                if stack and stack[-1] == map[char]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(char)
        
        return True if not stack else False
