class Solution:
    def reverse(self, x: int) -> int:
        if x >= 0:
            x = int(str(x)[::-1])
        else:
            s = str(x)[1:]
            s = s[::-1]
            x = -1 * int(s)
        return x if x in range(-2 ** 31, 2 ** 31 - 1) else 0
