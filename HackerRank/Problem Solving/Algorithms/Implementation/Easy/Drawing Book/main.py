#!/bin/python3

import os


#
# Complete the pageCount function below.
#
def pageCount(n, p):
    fromstart = p - 1
    fromend = n - p
    if fromstart < fromend:
        return p // 2
    else:
        if p % 2:
            p -= 1
        if n % 2:
            n -= 1
        return (n - p) // 2


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    p = int(input())

    result = pageCount(n, p)

    fptr.write(str(result) + '\n')

    fptr.close()
