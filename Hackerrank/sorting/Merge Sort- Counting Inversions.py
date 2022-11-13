#!/bin/python3

import math
import os
import random
import re
import sys


#
# Complete the 'countInversions' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts INTEGER_ARRAY arr as parameter.
#

class Merging:
    def __init__(self):
        self.count = 0

    def merge(self, arr, l, m, r):
        n1 = m - l + 1
        n2 = r - m
        L = [0] * (n1)
        R = [0] * (n2)

        for i in range(n1):
            L[i] = arr[l + i]

        for j in range(n2):
            R[j] = arr[m + 1 + j]

        i = j = 0
        k = l
        while (i < n1 and j < n2):
            if L[i] <= R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                self.count += n1 - i
                j += 1

            k += 1
        while i < n1:
            arr[k] = L[i]
            k += 1
            i += 1

        while j < n2:
            arr[k] = R[j]
            k += 1
            j += 1
        # print(count)
        # return count

    def mergeSort(self, arr, l, r):
        count = 0
        if l < r:
            mid = l + (r - l) // 2
            self.mergeSort(arr, l, mid)
            self.mergeSort(arr, mid + 1, r)
            self.merge(arr, l, mid, r)
            # count += c
        return self.count


def countInversions(arr):
    merging = Merging()
    result = merging.mergeSort(arr, 0, len(arr) - 1)
    return result

#Method 2:
# def merge(arr, l, m, r):
#         n1 = m - l + 1
#         n2 = r - m
#         L = [0] * (n1)
#         R = [0] * (n2)
#
#         for i in range(n1):
#             L[i] = arr[l + i]
#
#         for j in range(n2):
#             R[j] = arr[m + 1 + j]
#
#         i = j = 0
#         k = l
#         count = 0
#         while (i < n1 and j < n2):
#             if L[i] <= R[j]:
#                 arr[k] = L[i]
#                 i += 1
#             else:
#                 arr[k] = R[j]
#                 count += n1 - i
#                 j += 1
#
#             k += 1
#         while i < n1:
#             arr[k] = L[i]
#             k += 1
#             i += 1
#
#         while j < n2:
#             arr[k] = R[j]
#             k += 1
#             j += 1
#         # print(count)
#         return count
#
#
# def mergeSort(arr, l, r):
#     count = 0
#     if l < r:
#         mid = l + (r - l) // 2
#         count += mergeSort(arr, l, mid)
#         count += mergeSort(arr, mid + 1, r)
#         count += merge(arr, l, mid, r)
#         # count += c
#     return count
#
#
# def countInversions(arr):
#     result = mergeSort(arr, 0, len(arr) - 1)
#     return result


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        arr = list(map(int, input().rstrip().split()))

        result = countInversions(arr)

        fptr.write(str(result) + '\n')

    fptr.close()
