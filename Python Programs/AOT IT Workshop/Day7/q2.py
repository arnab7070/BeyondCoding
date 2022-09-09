# Write a python program to perform the addition of two 3X3 Matrixes.
matrix1 = [[],[],[]]
print("Enter the elements of the first matrix: ")
for i in range (3):
    for j in range (3):
            var = int(input())
            matrix1[i].append(var)
matrix2 = [[],[],[]]
print("Enter the elements of the second matrix: ")
for i in range (3):
    for j in range (3):
            var = int(input())
            matrix2[i].append(var)
sum_matrix = [[],[],[]]
for i in range (3):
    for j in range (3):
        sum_matrix[i].append(matrix1[i][j]+matrix2[i][j])

print("Now the sum of the given matrix is: ")
for i in matrix1:
    print(i)
print()
for i in matrix2:
    print(i)
print()
for i in sum_matrix:
    print(i)