#!/usr/bin/env python
# coding: utf-8

# # Remove Duplicates from Sorted Array

# Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.
# 
# Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.
# 
# Return k after placing the final result in the first k slots of nums.
# 
# Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

# In[1]:


class Solution(object):                     
    def removeDuplicates(self, nums):
        num_exists = [0] * 201
        for x in range(len(nums)):
            num_exists[nums[x] + 100] = 1
        y = 0
        for x in range(-100, 101):
            if num_exists[x + 100]:
                nums[y] = x
                y += 1
        return y


# In[ ]:




