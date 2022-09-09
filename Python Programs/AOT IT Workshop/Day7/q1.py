#Write a python program to create an 3X3 Matrix randomly and calculate sum of the diagonal elements.
import random
matrix = [[],[],[]]
sum1 = 0
for i in range (3):
    for j in range (3):
            matrix[i].append(random.randint(0,9))
            if i==j:
                sum1 += matrix[i][j]
print(f"The sum of the diagonal elements for the following matrix is = {sum1}")
for i in matrix:
    print(i)