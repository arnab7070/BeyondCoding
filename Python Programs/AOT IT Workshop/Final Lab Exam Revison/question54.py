n = int(input("Enter the array size: "))
L = []
print("Enter the elements of L array: ")
for i in range(n):
    temp = int(input())
    L.append(temp)
M = []
print("Enter the elements of M array: ")
for i in range(n):
    temp = int(input())
    M.append(temp)
N = []
print("The sum of these two array elements: ")
for i in range(n):
    N.append(M[i] + L[i])
print(N)
