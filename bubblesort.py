def bubble_sort(A):
    issorted = False
    while not issorted:
        issorted = True
        for i in range(len(A)-1):
            if A[i]>A[i+1]:
                A[i],A[i+1] = A[i+1], A[i]
                issorted = False
    return A

#code below
A = [2,1,4,3,65,7,24]
b = bubble_sort(A)
print(b)
