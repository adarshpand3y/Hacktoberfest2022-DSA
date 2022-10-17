# Jump Search
import math

def jumpSearch( arr , x , n ):
	
	# Find block size
	step = math.sqrt(n)
	
	# block where element is
	prev = 0
	while arr[int(min(step, n)-1)] < x:
		prev = step
		step += math.sqrt(n)
		if prev >= n:
			return -1
	
	# linear search for x 
	while arr[int(prev)] < x:
		prev += 1
		
		#If we reach next block or end
		# of array, and element is not present.
		if prev == min(step, n):
			return -1
	
	# element found
	if arr[int(prev)] == x:
		return prev
	
	return -1

# Driver code
arr = [ 0, 1, 1, 2, 3, 5, 8, 13, 21,
	34, 55, 89, 144, 233, 377, 610 ]
x = 55
n = len(arr)

# finding the index of 'x' 
index = jumpSearch(arr, x, n)

# where 'x' is located
print("Number" , x, "is at index" ,"%.0f"%index)
