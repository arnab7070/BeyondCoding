string = input("Enter your string: ")

while 1:
    i = 0
    flag = 0
    while i < len(string)-1:
        if(string[i] == string[i+1]):
            string = string[:i] + string[i+2:]
            flag=1
        else:
            i += 1

    if flag==0:
        break
if len(string)>0:
    print('Output - {}'.format(string))
else:
    print("Empty String")