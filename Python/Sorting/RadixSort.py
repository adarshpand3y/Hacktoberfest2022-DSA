# Radix is not comparison sort
from math import pow, floor, log10
from operator import le
from re import A


def getDigit(num, place):
    return floor(abs(num)//pow(10, place)) % 10


print("-------")
print(getDigit(12, 3))


# def digitCount(num):
#     temp = 0
#     while(num > 0):
#         temp += 1
#         num //= 10
#     return temp


def digitCount(num):
    if num == 0:
        return 1
    return floor(log10(abs(num))) + 1


def mostDigits(arr):
    return digitCount(max(arr))


# print(getDigit(1234, 1))
# print(digitCount(21388))
# print(mostDigits([1234, 56, 7]))


def radix_sort(arr):
    max_digits = mostDigits(arr)
    for i in range(max_digits):
        digit_buckets = [[] for _ in range(0, 10)]
        for k in range(len(arr)):
            digit_buckets[getDigit(arr[k], i)].append(arr[k])
        arr = []
        for list in digit_buckets:
            arr.extend(list)
    return arr


print(radix_sort(arr=[23, 345, 5467, 12, 2345, 9852]))

# Time Complexity: O(nk) (all cases)
# space complexity : O(n+k)
# n length of array
# k is no of digits
