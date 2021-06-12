input()
cnt = [0]*5
for t in map(int, input().split()):
    cnt[t-1] += 1
print(cnt.index(max(cnt)) + 1)
