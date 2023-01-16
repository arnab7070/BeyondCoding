str = input("Enter the string: ")
count = 0
while count < len(str)-1:
    if (str[count] == str[count+1]):
        str = str[:count] + str[count+2:]
        count = 0  # start checking from begining again
    else:
        count += 1
if (str == ""):
    str = "Empty String"
print(str)
