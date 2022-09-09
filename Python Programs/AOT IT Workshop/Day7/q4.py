# Write a python program to perform the Matrix Multiplication of two 3X3 Matrixes.
import numpy
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
mul_matrix = [[],[],[]]
print("Multiplication of these two matrix will be: ")
for i in matrix1:
    print(i)
print()
for i in matrix2:
    print(i)
print()

mul_matrix = numpy.dot(matrix1,matrix2)
 
for r in mul_matrix:
    print(r)