#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'minimumBribes' function below.
#
# The function accepts INTEGER_ARRAY q as parameter.
#

from collections import Counter


### working **************
def minimumBribes(a):
    swaps = 0
    i = len(a) - 1
    while (i >= 0):
        if (a[i] != i + 1):
            if (a[i - 1] == i + 1):
                swaps += 1
                a[i], a[i - 1] = a[i - 1], a[i]
            elif (a[i - 2] == i + 1):
                a[i - 2], a[i - 1], a[i] = a[i - 1], a[i], a[i - 2]
                swaps += 2
            else:
                print("Too chaotic")
                return 0
        i -= 1
    print(swaps)


# ****************************
# d = Counter()
# swaps = 0
# i = 0
# while i<len(q):
#     if q[i] != i+1:
#         j = q[q[i]-1]
#         d[i] += 1
#         d[j] += 1
#         q[i],q[j] = q[j],q[i]
#         swaps += 1
#     else:
#         i += 1

# isChaotic = False
# for i in d.values():
#     if i > 2:
#         isChaotic = True
#         break

# if isChaotic:
#     print("Too chaotic")
# else:
#     print(swaps)

# greater_values = 0
# is_chaotic = False
# for i in range(len(q)-1):
#     for j in range(i+1,len(q)):
#         if j<i and greater_values<=2:
#             greater_values += 1
#         if greater_values>2:
#             is_chaotic = True

#         greater_values = 0

# if is_chaotic == False:
#     d = Counter()

if __name__ == '__main__':
    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        q = list(map(int, input().rstrip().split()))

        minimumBribes(q)
