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
    unique_no = set()
    count = 0
    for i in range(len(arr)):
        lower_no = arr[i] - k
        upper_no = arr[i] + k
        if lower_no in unique_no:
            count += 1
        if upper_no in unique_no:
            count += 1
        unique_no.add(arr[i])

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
