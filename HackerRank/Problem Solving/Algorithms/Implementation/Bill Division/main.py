n, k = map(int, input().split())
arr = list(map(int, input().split()))
b = int(input())
x = (sum(arr) - arr[k]) / 2
if x == b:
    print("Bon Appetit")
else:
    print(int(abs(x - b)))
