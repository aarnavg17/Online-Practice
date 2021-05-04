class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        res = []
        if target not in nums:
            return [-1, -1]
        else:
            idex = nums.index(target)
            res.append(idex)
            idex += 1
            try:
                while nums[idex] == target and idex < len(nums):
                    idex += 1
            except:
                pass
            res.append(idex - 1)
            return res
