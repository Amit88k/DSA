#!/bin/python3

import math
import os
import random
import re
import sys


#
# Complete the 'rotLeft' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER_ARRAY a
#  2. INTEGER d
#

# approach 1
def rotLeft(a, d):
    return a[d:len(a)] + a[0:d]

# approach 2
# def rotLeft(a, d):
#     # Write your code here
#     b = [0 for _ in range(len(a))]
#     for i in range(len(a)):
#         new_index = (len(a)+i-d)%len(a)
#         b[new_index] = a[i]

#     return b


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    d = int(first_multiple_input[1])

    a = list(map(int, input().rstrip().split()))

    result = rotLeft(a, d)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
