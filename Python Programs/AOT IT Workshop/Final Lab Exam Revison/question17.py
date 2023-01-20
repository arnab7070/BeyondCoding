n = int(input("Enter how many numbers to be inserted in the list: "))
numberList = []
for i in range(n):
    numberList.append(int(input()))
print(numberList)
print(set(numberList))
