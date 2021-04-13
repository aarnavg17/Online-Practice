class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        start, end = 0, len(nums)
        if target > nums[end - 1]:
            return end
        elif target < nums[0]:
            return 0
        while True:
            mid = (start + end) // 2
            if target > nums[mid]:
                if target < nums[mid + 1]:
                    return mid + 1
                else:
                    start = mid + 1
            elif target < nums[mid]:
                if target > nums[mid - 1]:
                    return mid
                else:
                    end = mid - 1
            elif target == nums[mid]:
                return mid
