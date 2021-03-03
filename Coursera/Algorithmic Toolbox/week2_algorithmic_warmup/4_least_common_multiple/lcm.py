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

def lcm(a, b):
    return ((a * b) / gcd(a, b))
    
a, b = map(int, input().split())
print(int(lcm(a, b)))