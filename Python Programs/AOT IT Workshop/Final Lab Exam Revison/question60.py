import numpy as np
array1 = []
array2 = []
print("Enter the 1st matrix elements: ")
for i in range(3):
    for j in range(3):
        array1.append(int(input()))
print("Enter the 2nd matrix elements: ")
for i in range(3):
    for j in range(3):
        array2.append(int(input()))

arr1 = np.fromiter(array1, dtype=int).reshape(3, 3)
arr2 = np.fromiter(array2, dtype=int).reshape(3, 3)

sumMatrix = arr1 + arr2
mulMatrix = arr1 * arr2
dot = np.dot(arr1, arr2)

print(sumMatrix)
print(mulMatrix)
print(dot)
