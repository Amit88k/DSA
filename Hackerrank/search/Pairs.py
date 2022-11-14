#!/bin/python3

import math
import os
import random
import re
import sys


#
# Complete the 'pairs' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER k
#  2. INTEGER_ARRAY arr
#

def pairs(k, arr):
    # #Method 1 -> This method will give you unique pairs
    # a = list(arr)
    # # make a set of all a[i] + k
    # b = list(x + k for x in arr)
    # # return the length of the intersection set
    # return len(a&b)
    # # return len(set(a).intersection(b))

    # Method 2 -> This methid will give you all the pairs count
    unique_no = {}
    count = 0
    for i in range(len(arr)):
        lower_no = arr[i] - k
        upper_no = arr[i] + k
        if lower_no in unique_no.keys():
            count += unique_no[lower_no]
        if upper_no in unique_no.keys():
            count += unique_no[upper_no]
        if arr[i] in unique_no.keys():
            unique_no[arr[i]] += 1
        else:
            unique_no[arr[i]] = 1
    return count


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    result = pairs(k, arr)

    fptr.write(str(result) + '\n')

    fptr.close()
