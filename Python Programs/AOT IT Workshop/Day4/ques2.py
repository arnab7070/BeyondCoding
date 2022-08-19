from itertools import combinations, permutations
print("____________________________Permutation____________________________")
list = []
x = int(input("Enter how many elements you want to insert in the list: "))
for i in range(x):
    y = int(input())
    list.append(y)
print("Permutations of the given elements in the list are: ")
perm = permutations(list)
for i in perm:
    print(i)
print("____________________________Combination____________________________")
a = int(input("Enter the range of the number you want to get combinations: "))
b = int(input("Enter the length of the combinations: "))
com = combinations(range(1,a+1),b)
print("Combinations of the given input are: ")
for i in com:
    print(i)
