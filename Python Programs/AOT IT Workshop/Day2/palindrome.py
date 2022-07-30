print("Enter the values to check Palindrome, type 'q' to exit")
while True:
    num = input()
    if num=='q':
        break
    digit = len(num)
    palindrome = 0
    num = int(num)
    duplicate = num
    while num>0:
        temp = num%10
        palindrome += temp ** digit
        num = num//10
    if palindrome==duplicate:
        print("Palindrome")
    else:
        print("Not Palindrome")