# python program to sort an array by selection sort
def selectionSort(array):
	for s in range(0,len(array)):
		smallest = s
		for i in range(s + 1, len(array)):
			if array[i] < array[smallest]:
				smallest= i

		# Arranging min at the correct position
		(array[s], array[smallest]) = (array[smallest], array[s])

# sample array
array = [88,33,66,44,22,11,99,55,77]
print("Unsorted List : ", array)
selectionSort(array)
#sorted
print("Sorted List : ", array)