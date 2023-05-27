class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        l,r=0,len(nums) - 1
        #start our binary search
        while l <= r:
            mid = (l+r) // 2
            if nums[mid]==target:
                return mid
            if target>nums[mid]:
                l = mid + 1
            if target<nums[mid]:
                r = mid - 1
        return l  
