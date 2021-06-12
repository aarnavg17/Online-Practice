n, k, q = map(int, input().split())
a = list(map(int, input().split()))
k %= n
for _ in range(q):
    print(a[int(input()) - k])
