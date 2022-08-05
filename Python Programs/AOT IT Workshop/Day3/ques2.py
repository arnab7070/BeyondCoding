string = raw_input("Enter your string: ")
lower = "abcdefghijklmnopqrstuvwxyz"
count_lower = count_upper = 0
for char in string:
    if(char in lower):
        count_lower += 1
    elif(char == ' '):
        continue
    else:
        count_upper += 1
print('Number of uppercase letters are: {}'.format(count_upper))
print('Number of lowercase letters are: {}'.format(count_lower))