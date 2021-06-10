lastAnswer = 0
n, q = map(int, input().split())
seqList =[[] for _ in range(n)]
for _ in range(q):
    Q, x, y = map(int, input().split())
    if Q == 1:
        seqList[(x ^ lastAnswer) % n].append(y)
    else:
        lastAnswer = seqList[(x ^ lastAnswer) % n][y % len(seqList[(x ^ lastAnswer) % n])]
        print(lastAnswer)

