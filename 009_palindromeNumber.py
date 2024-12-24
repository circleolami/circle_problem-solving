class Solution(object):
    def isPalindrome(self, x):
        if x<0:
            return False
        
        str_x = str(x)
        return str_x == str_x[::-1]
    
if __name__ == "__main__":
    solution = Solution()
    x = 121
    print(solution.isPalindrome(x))

    x = -121
    print(solution.isPalindrome(x))

    x = 10
    print(solution.isPalindrome(x))