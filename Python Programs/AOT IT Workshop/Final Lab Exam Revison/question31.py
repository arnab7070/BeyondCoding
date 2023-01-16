str = input("Enter the string: ").split()
ansString = ""
for i in str:
    # In Python, strings are immutable, which means that
    # individual characters within a string cannot be modified.
    new_string = i[0].upper() + i[1:-1] + i[len(i)-1].upper()
    ansString += new_string + " "
print(ansString)
