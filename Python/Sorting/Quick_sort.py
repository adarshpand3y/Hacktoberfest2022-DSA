# Implemented Quick Sort Algorithm in Python
# GitHub username ~ milind64

def partition(array, low, high):     # function to create partition

	pivot = array[high]

	i = low - 1

	for j in range(low, high):
		if array[j] <= pivot:
			i = i + 1
			(array[i], array[j]) = (array[j], array[i])

	(array[i + 1], array[high]) = (array[high], array[i + 1])

	return i + 1

def quick_sort(array, low, high):         # function to quick_sort  
	if low < high:

		pi = partition(array, low, high)

		quick_sort(array, low, pi - 1)

		quick_sort(array, pi + 1, high)


# Driver code
n =int(input("Enter size of the Array : "))
arr = []
print("Enter the elements in the array")
for i in range(0,n):
    arr.append(int(input()))

quick_sort(arr, 0, len(arr) - 1)

print(f'Sorted Array : {arr}')


