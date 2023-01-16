n = int(input("Enter the list size: "))
arr = []
print("Enter the elements of the list: ")
for i in range(n):
    arr.append(int(input()))
for i in range(int(n/2)):
    temp = arr[i]
    arr[i] = arr[len(arr)-1-i]
    arr[len(arr)-1-i] = temp
print(arr)
