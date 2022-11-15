#!/bin/python3

import math
import os
import random
import re
import sys
from bisect import bisect_right


# Complete the triplets function below.
def triplets(a, b, c):
    b = set(b)
    a = sorted(set(a))
    c = sorted(set(c))
    count = 0
    for i in b:
        a_index = bisect_right(a, i)
        c_index = bisect_right(c, i)
        count += a_index * c_index
    return count


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    lenaLenbLenc = input().split()

    lena = int(lenaLenbLenc[0])

    lenb = int(lenaLenbLenc[1])

    lenc = int(lenaLenbLenc[2])

    arra = list(map(int, input().rstrip().split()))

    arrb = list(map(int, input().rstrip().split()))

    arrc = list(map(int, input().rstrip().split()))

    ans = triplets(arra, arrb, arrc)

    fptr.write(str(ans) + '\n')

    fptr.close()
