# Search Insert Position
# Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

from operator import index
from typing import List


def searchInsert(list, target):
    # Initialising of left(l) and right(r) pointers

    l,r = 0,  len(list) -1

    # Now we will proceed for our binary search 
    while l<=r:

        # Computing the middle pointer
        mid = (l+r) // 2

        # First  thing we will check is if we instantly found our target 
        if target == list[mid]:
            return mid

        # If above is not the case then we have two possibilities
        
        
        # 1. Target is greater than middle value
        # In this case, start searching from right and update left pointers and shifting it towards right.
        
        if target > list[mid]:
            l = mid + 1

        
        # 2. Target is less than middle value
        # In this case, start searching toawrds left
        else:
            r = mid - 1



    # Worst case - If we never found our target
    # We return our left pointer
    return l 

list = [1,3,5,6] 
target = 5

index = searchInsert(list, target)


print(f" The target value of the given integer is a the index of {index}")


