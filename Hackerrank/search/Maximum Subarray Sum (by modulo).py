#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'maximumSum' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts following parameters:
#  1. LONG_INTEGER_ARRAY a
#  2. LONG_INTEGER m
#
from itertools import accumulate
from bisect import bisect_right, insort

# Method 1
# def maximumSum(a, m):
#     a = list(map(lambda x:x%m,accumulate(a)))
#     print(a)
#     maxi = max(a)
#     arr = []
#     for i in a:
#         insort(arr,i)
#         print("insorted array: ", arr)
#         if i!=arr[-1]:
#             maxi = max(maxi,(i-arr[bisect_right(arr,i)])%m)
#     print(arr)
#     return maxi

# Method 2 (approach is same, way of doing is different)
def maximumSum(a, m):
    sum_arr = []
    max_sum = 0
    prefix = 0
    d = 0

    for i in range(len(a)):
        prefix = (prefix + a[i]) % m
        max_sum = max(max_sum, prefix)
        insort(sum_arr, prefix)
        if prefix != sum_arr[-1]:
            d = sum_arr[bisect_right(sum_arr, prefix)]
        max_sum = max(max_sum, (prefix - d + m) % m)

        # print(sum_arr)
    return max_sum


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    for q_itr in range(q):
        first_multiple_input = input().rstrip().split()

        n = int(first_multiple_input[0])

        m = int(first_multiple_input[1])

        a = list(map(int, input().rstrip().split()))

        result = maximumSum(a, m)

        fptr.write(str(result) + '\n')

    fptr.close()
