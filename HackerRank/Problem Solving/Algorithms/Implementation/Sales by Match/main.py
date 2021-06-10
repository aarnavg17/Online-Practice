#!/bin/python3
# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    socks = {}
    pair: int = int()
    for x in ar:
        if x in socks.keys():
            socks[x] += 1
        else:
            socks[x] = 1
    for x in socks:
        pair += socks[x] // 2
    return pair


n = int(input())
ar = list(map(int, input().split()))

result = sockMerchant(n, ar)

print(result)

