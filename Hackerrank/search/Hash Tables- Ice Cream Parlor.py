#!/bin/python3

import math
import os
import random
import re
import sys


#
# Complete the 'whatFlavors' function below.
#
# The function accepts following parameters:
#  1. INTEGER_ARRAY cost
#  2. INTEGER money
#

def whatFlavors(cost, money):
    cost_dict = {}
    for i in range(len(cost)):
        rem = money - cost[i]
        if rem in cost_dict.keys():
            print(cost_dict.get(rem) + 1, i + 1)
            return 0
        else:
            cost_dict[cost[i]] = i


if __name__ == '__main__':
    t = int(input().strip())

    for t_itr in range(t):
        money = int(input().strip())

        n = int(input().strip())

        cost = list(map(int, input().rstrip().split()))

        whatFlavors(cost, money)
