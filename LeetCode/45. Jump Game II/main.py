class Solution:
    def jump(self, nums: List[int]):
        n = len(nums)
        jumps = 1

        if n <= 1:
            return "0"

        farthest = nums[0]
        curr_end = nums[0]

        for i in range(1, n):
            if i == n - 1:
                return jumps
            farthest = max(farthest, i + nums[i])
            if i == curr_end:
                jumps += 1
                curr_end = farthest

        return jumps
