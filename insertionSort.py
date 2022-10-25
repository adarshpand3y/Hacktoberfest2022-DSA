def insertion_sort(A):
    for i in range(1, len(A)-1):
        j = i
        while j > 0 and A[j] < A[j-1]:
            A[j],A[j-1] = A[j-1],A[j]
            j -= 1
        return A

A = [1,3,4,2,6,5]
insertion_sort(A)
