def printfn(arr):
    for x in arr:
        print(x, end=" ")
    print("")


# Complete the insertionSort1 function below.
def insertionSort1(n, arr):
    last = arr[n - 1]
    for x in range(n - 2, -1, -1):
        if arr[x] > last:
            arr[x + 1] = arr[x]
            printfn(arr)
        else:
            arr[x + 1] = last
            printfn(arr)
            break
    else:
        arr[0] = last
        printfn(arr)


if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    insertionSort1(n, arr)


# 14
# 1 3 5 9 13 22 27 35 46 51 55 83 87 23
