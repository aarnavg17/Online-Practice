n, d = map(int, input().split())
arr = list(map(int, input().split()))
arr = arr[d:] + arr[:d]
for x in arr:
    print (x, end=" ")

