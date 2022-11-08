#!/bin/python3

import math
import os
import random
import re
import sys


#
# Complete the 'hourglassSum' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#

def hourglassSum(arr):
    #approach 1
    # ll = list()
    # for i in range(4):
    #     j=0
    #     while(j<=3):
    #         s = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]
    #         ll.append(s)
    #         j += 1

    # highest_sum = -10000000
    # for i in range(len(ll)):
    #     if ll[i]>highest_sum:
    #         highest_sum = ll[i]
    # return highest_sum

    ## approach 2
    ll = list()
    for i in range(len(arr) - 2):
        for j in range(len(arr[0]) - 2):
            summ = arr[j][i] + arr[j][i + 1] + arr[j][i + 2] + arr[j + 1][i + 1] + arr[j + 2][i] + arr[j + 2][i + 1] + \
                   arr[j + 2][i + 2]
            ll.append(summ)

    ans = -1000000000
    for i in ll:
        if i > ans:
            ans = i

    return ans


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    result = hourglassSum(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
