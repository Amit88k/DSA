#!/bin/python3

import math
import os
import random
import re
import sys


#
# Complete the 'maximumToys' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY prices
#  2. INTEGER k
#

def maximumToys(prices, k):
    sorted_prices = sorted(prices)
    spent_so_far = 0
    toys = 0
    for i in sorted_prices:
        if i + spent_so_far < k:
            spent_so_far += i
            toys += 1
        else:
            break
    return toys


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    prices = list(map(int, input().rstrip().split()))

    result = maximumToys(prices, k)

    fptr.write(str(result) + '\n')

    fptr.close()
