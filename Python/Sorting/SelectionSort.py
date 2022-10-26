def selection_sort(arr):
    for i in range(len(arr)):
        min = i
        for j in range(i+1, len(arr)):
            if arr[min] > arr[j]:
                min = j
        if i != min:
            [arr[min], arr[i]] = [arr[i], arr[min]]
    return arr


print(selection_sort(arr=[34, 22, 19, 17]))

# Time Complexity: O(n*n) (Best case and Worst case)
# Space Complexity: O(1)
