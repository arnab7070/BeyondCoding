string = input("Enter the string: ")
print(''.join(sorted(set(string), key=string.index)))
