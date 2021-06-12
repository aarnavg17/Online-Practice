b, n, m = map(int, input().split())
keyboards = list(map(int, input().split()))
drives = list(map(int, input().split()))

keyboards.sort()
drives.sort(reverse=True)
i = j = prev_max = 0

while i < n and j < m:
    c = keyboards[i] + drives[j]
    if c <= b:
        if c > prev_max:
            prev_max = c
        i += 1
    else:
        j += 1

if prev_max == 0:
    print(-1)
else:
    print(prev_max)
