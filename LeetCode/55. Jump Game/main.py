class Solution:
    def canJump(self, nums: List[int]) -> bool:
        last_index = len(nums) - 1

        def letssee(last_index):
            for i in range(last_index - 1, -1, -1):
                if i + nums[i] >= last_index:
                    last_index = i
                    if last_index == 0:
                        return True
                    else:
                        return letssee(last_index)
                elif i == 0:
                    return False
            return True

        return letssee(last_index)
