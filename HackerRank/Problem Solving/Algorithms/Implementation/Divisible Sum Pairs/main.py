import os


# Complete the divisibleSumPairs function below.
def divisibleSumPairs(k, ar):
    cnt = int()
    for i in range(0, len(ar)):
        for j in range(i + 1, len(ar)):
            if (ar[i] + ar[j]) % k == 0:
                cnt += 1
    return cnt


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    ar = list(map(int, input().rstrip().split()))

    result = divisibleSumPairs(k, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
