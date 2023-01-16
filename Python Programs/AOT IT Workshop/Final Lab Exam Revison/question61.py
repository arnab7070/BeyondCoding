import numpy as np
import random
matrix = []
print("Enter the matrix elements: ")
for i in range(9):
    matrix.append(random.randint(1, 10))
numMatrix = np.fromiter(matrix, dtype=int).reshape(3, 3)
ans = 0
print(numMatrix)
for i in range(3):
    for j in range(3):
        if (i == j):
            ans += numMatrix[i][j]
print(f"The sum of diagonal elements of the matrix = {ans}")
