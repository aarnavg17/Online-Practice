#Monk and Rotation
for _ in range (int(input())):
    N, K = map(int, input().split())
    while (K>=N):
        K -= N;
    A = list(map(int, input().split()))
    #print(K)
    if (K):
        print(*A[-1*K:], *A[:N-K], sep=" ")
    else:
        print(*A, sep=" ")
    print('\n')