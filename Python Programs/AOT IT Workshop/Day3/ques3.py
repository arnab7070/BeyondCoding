string = raw_input("Enter your string: ")
lower = "abcdefghijklmnopqrstuvwxyz"
check = 1

for char in string:
    if char == ' ':
        continue
    if (char.lower() not in lower):
        print("It's not a pangram")
        check = 0
        break
if(check):
    print("It's a pangram")