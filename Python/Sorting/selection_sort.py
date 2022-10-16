""" 

Selection sort in Python :

The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) 
from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array. 

Different Complexities
Worst complexity: n^2
Average complexity: n^2
Best complexity: n^2
Space complexity: 1

For Extra details visit :- https://www.geeksforgeeks.org/selection-sort/
"""
def selectionSort(array, size):
	
	for ind in range(size):
		min_index = ind

		for j in range(ind + 1, size):
			# select the minimum element in every iteration
			if array[j] < array[min_index]:
				min_index = j
		# swapping the elements to sort the array
		(array[ind], array[min_index]) = (array[min_index], array[ind])

arr = [-6,7,-3,2,6,-8,10,15]
selectionSort(arr, len(arr))
print('Sorted array is : ')
print(arr)
