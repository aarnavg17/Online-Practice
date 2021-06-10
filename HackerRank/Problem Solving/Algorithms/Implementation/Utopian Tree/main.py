import os


# Complete the utopianTree function below.
def utopianTree(n):
    if n == 0:
        return 1
    elif n % 2:
        return 2 * utopianTree(n - 1)
    else:
        return utopianTree(n - 1) + 1


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = utopianTree(n)

        fptr.write(str(result) + '\n')

    fptr.close()
