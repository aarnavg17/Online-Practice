n, m = map(int, input().split())
arr = [0 for _ in range(n)]
for _ in range(m):
    a, b, k = map(int, input().split())
    arr[a-1] += k
    try:
        arr[b] -= k
    except:
        pass
maxnum = 0
run_val = 0
for x in arr:
    run_val += x
    if run_val > maxnum:
        maxnum = run_val
print(maxnum)

