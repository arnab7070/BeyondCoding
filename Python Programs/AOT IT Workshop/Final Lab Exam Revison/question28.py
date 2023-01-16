user_input = int(input("Enter the number of lines: "))
for i in range(user_input):
    string = ""
    for j in range(65, 65+i+1):
        string += chr(j)+" "
    print(string)
