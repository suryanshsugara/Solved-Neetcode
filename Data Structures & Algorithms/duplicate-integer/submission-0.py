class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        seen = {}
        for num in nums:
            if num in seen:
                return True
            seen[num] = True
        return False

#example usage
nums = [1,2,3,3]
sol = Solution()
print(sol.hasDuplicate(nums))