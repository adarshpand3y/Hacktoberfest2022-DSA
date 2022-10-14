# Python Program to find transpose of a matrix

N = 4

# This function stores
# transpose of A[][] in B[][]

def transpose(A,B):

for i in range(N):
for j in range(N):
B[i][j] = A[j][i]

# driver code
A = [ [1, 1, 1, 1],
[2, 2, 2, 2],
[3, 3, 3, 3],
[4, 4, 4, 4]]

B = A[:][:] # To store result

transpose(A, B)

print("Result matrix is")
for i in range(N):
for j in range(N):
print(B[i][j], " ", end='')
print()

# This code is contributed by Harizi Bouabdellah.
