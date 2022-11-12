#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'activityNotifications' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY expenditure
#  2. INTEGER d
#

from bisect import bisect_left, insort


def get_median(ste, d):
    if d % 2 != 0:
        median = ste[d // 2]
    else:
        median = (ste[d // 2] + ste[(d // 2) - 1]) / 2
    return median


def activityNotifications(expenditure, d):
    te = expenditure[0:d]
    ste = sorted(te)
    median = get_median(ste, d)

    notification = 0
    if expenditure[d] >= 2 * median:
        notification += 1

    for i in range(d, len(expenditure) - 1):
        index = bisect_left(ste, expenditure[i - d])
        x = ste.pop(index)
        insort(ste, expenditure[i])
        median = get_median(ste, d)
        if expenditure[i + 1] >= 2 * median:
            notification += 1

    return notification


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    d = int(first_multiple_input[1])

    expenditure = list(map(int, input().rstrip().split()))

    result = activityNotifications(expenditure, d)

    fptr.write(str(result) + '\n')

    fptr.close()
