'''
Next Greater Element

The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.
You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.
For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.
Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.

Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
Output: [-1,3,-1]
Explanation: The next greater element for each value of nums1 is as follows:
- 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
- 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
- 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
'''

def nextGreaterElement(nums1, nums2):
    ans = {}                                # Set ans records the Next Greater Element of every num in nums2 if exists.
    res = []
    stack = []                              # Using decreasing stack to find Next Greater Element.

    for n2 in nums2:
        while stack and n2 > stack[-1]:     # At this situation, n2 is the Next Greater Element of stack[-1],
            ans[stack.pop()] = n2           # so map stack[-1] to n2.
        stack.append(n2)
    # [4, 2] {1: 3, 3: 4}

    for n1 in nums1:                        # Iterate through nums1,
        res.append(ans.get(n1, -1))         # If n1 not appear in ans, there isn't Next Greater Element for n1, res.append(-1).
        # Otherwise, res.append(ans[n1])

    print("The Next Greater elements for the elements in a list \nnums1",nums1,"are:",res)

nextGreaterElement([4,1,2],[1,3,4,2])