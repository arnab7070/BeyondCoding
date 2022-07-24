n = int(input("How many numbers you want to enter: "))
lst = []
print("Now enter the elements")
largest=0
secondlargest=0
for i in range(n):
    lst.append(int(input()))
for i in lst:
    if largest<i:
        largest = i
for i in lst:
    if secondlargest<i:
        if i < largest:
            secondlargest = i
print(secondlargest)
