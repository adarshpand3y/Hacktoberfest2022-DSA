# Selection Sort Using Python


def selectionSort(array, size):
    for step in range(size):
        min_idx = step

        for i in range(step + 1, size):
            if array[i] < array[min_idx]:
                min_idx = i
        
        (array[step], array[min_idx]) = (array[min_idx], array[step])


list = [-18,-45,0,10,99,7,33,800]
size = len(list)
print("The Array Before Sorted: ")
print(list)
selectionSort(list, size)
print('Sorted Array in Ascending Order:')
print(list)
