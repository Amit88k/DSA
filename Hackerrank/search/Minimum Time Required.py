#!/bin/python3

import math
import os
import random
import re
import sys


# Complete the minTime function below.
def daily_outcome(machines, day_no):
    return sum([(day_no // i) for i in machines])


def minTime(machines, goal):
    min_days = (goal * min(machines)) // len(machines)
    max_days = (goal * max(machines)) // len(machines)

    while min_days < max_days:
        mid = (min_days + max_days) // 2
        if min_days == mid or max_days == mid:
            break
        elif (daily_outcome(machines, mid) < goal):
            min_days = mid
        else:
            max_days = mid

    return max(min_days, max_days)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nGoal = input().split()

    n = int(nGoal[0])

    goal = int(nGoal[1])

    machines = list(map(int, input().rstrip().split()))

    ans = minTime(machines, goal)

    fptr.write(str(ans) + '\n')

    fptr.close()
