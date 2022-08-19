list = []
x = int(input("Enter how many elements you want to insert in the list: "))
for i  in range(x):
    y = int(input())
    list.append(y)
list_set = set(list)
print(list_set)