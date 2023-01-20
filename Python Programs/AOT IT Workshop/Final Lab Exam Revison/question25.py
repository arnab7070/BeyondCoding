n = int(input("Enter the value of n: "))
employeeList = []
print("Now enter the ages: ")
for i in range(n):
    employeeList.append(int(input()))

group1 = 0
group2 = 0
group3 = 0

for i in employeeList:
    if i >= 26 and i <= 35:
        group1 += 1
    elif i >= 36 and i <= 45:
        group2 += 1
    elif i >= 46 and i <= 55:
        group3 += 1

print(f"Group1: {group1} Group2: {group2} Group3: {group3}")
