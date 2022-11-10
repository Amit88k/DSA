#!/bin/python3

import math
import os
import random
import re
import sys


# Complete the minimumSwaps function below.
def minimumSwaps(arr):
    # Method 1 : but in this case arr.index(i+1,i) takes time
    # swap = 0
    # for i in range(len(arr)):
    #     if arr[i] != i+1:
    #         index = arr.index(i+1,i)
    #         arr[i],arr[index] = arr[index],arr[i]
    #         swap += 1
    # return swap

    # Method 2
    swaps = 0
    i = 0
    while (i < len(arr)):
        if arr[i] != i + 1:
            a = arr[i]
            b = arr[arr[i] - 1]
            arr[i], arr[a - 1] = b, a
            swaps += 1
            # print(arr)
        else:
            i += 1
    return swaps


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    res = minimumSwaps(arr)

    fptr.write(str(res) + '\n')

    fptr.close()
