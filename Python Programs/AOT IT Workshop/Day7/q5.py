# Write a python program to find row wise maximum and column wise minimum element.
matrix = [[],[],[]]
print("Enter the values of matrix: ")
for i in range (3):
    for j in range (3):
            var = int(input())
            matrix[i].append(var)
max_row = []
max_column = []
for i in range (3):
    temp = 0
    for j in range (3):
        if matrix[i][j]>temp:
            temp = matrix[i][j]
    max_row.append(temp)
for i in range (3):
    var = 0
    for j in range (3):
        if matrix[j][i]>var:
            var = matrix[j][i]
    max_column.append(var)
for i in matrix:
    print(i)
print()
print(f"Max row elements of the matrix {max_row}")
print(f"Max column elements of the matrix {max_column}")