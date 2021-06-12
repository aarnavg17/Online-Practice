l = int(input())
r = int(input())
x = l ^ r
ans = 1
while x:
    x >>= 1
    ans <<= 1
print(ans - 1)
