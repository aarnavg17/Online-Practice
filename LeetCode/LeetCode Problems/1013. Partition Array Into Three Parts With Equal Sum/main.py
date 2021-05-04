class Solution:
    def canThreePartsEqualSum(self, A: List[int]) -> bool:
        if sum(A) % 3 !=0:
            return False
        reqSum, sumFound, currSum = sum(A) // 3, int(), int()
        for index in range(len(A)):
            currSum += A[index]
            if currSum == reqSum:
                sumFound, currSum = sumFound + 1, 0
            if sumFound == 3:
                if index == len(A)-1 or sum(A[index + 1:]) == 0:
                    return True
                else:
                    return False