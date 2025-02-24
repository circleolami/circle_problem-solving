class Solution(object):
    def twoSum(self, nums, target):
        num_map = {}

        for i, num in enumerate(nums):
            complement = target - num
            if complement in num_map:
                return [num_map[complement], i]
            num_map[num] = i

        return []
    
if __name__ == "__main__":
    solution = Solution()
    nums = [2,7,11,15]
    target = 9
    result = solution.twoSum(nums, target)
    print(result)