n = int(input("Enter the list size: "))
L = []
print("Enter the elements of the list: ")
for i in range(n):
    L.append(int(input()))
x = int(input("Set the lower limit: "))
y = int(input("Set the upper limit: "))

newList = L[x:y+1]
print(
    f"In this specific range Max is = {max(newList)} & Min is = {min(newList)}")
