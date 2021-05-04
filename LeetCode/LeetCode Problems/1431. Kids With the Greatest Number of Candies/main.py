class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        great = max(candies)
        out = []
        for i in range(len(candies)):
            candies[i] += extraCandies
            if candies[i] >= great:
                out.append(True)
            else:
                out.append(False)
        return out
