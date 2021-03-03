def gcd(a, b):
    if not a > b:
        temp = a
        a = b
        b = temp
    r = a % b
    while r:
        a = b
        b = r
        r = a % b
    return b

a, b = map(int, input().split())
print(gcd(a, b))