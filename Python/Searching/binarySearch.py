def binarySearch(num, l, r, key):
 
    # base case
    if r >= l:
 
        mid = l + (r - l) // 2
 
        # If element is present in the middle
        if num[mid] == key:
            return mid
 
        # If element is smaller than mid, search in left sub-array
        elif num[mid] > key:
            return binarySearch(num, l, mid-1, key)
 
        # If element is larger than mid, search in right sub-array        
        else:
            return binarySearch(num, mid + 1, r, key)
 
    else:
        # Element not found
        return -1
 
 
# main
N=int(input('\nEnter number of elements in the array:'))

num = list(map(int,input("\nEnter the sorted array : ").strip().split()))[:]
 
key = int(input('\nElement to be searched: '))
 
result = binarySearch(num, 0, len(num)-1, key)
 
if result != -1:
    print("Element found at index ", result)
else:
    print("Element not found")


