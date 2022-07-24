number = int(input("Enter the number to check: "))
number = int(number ** 0.5)
check = 1
for i in range(2,number):
    if number%i==0:
        print("The number is not prime")
        check=0
        break
if number==1:
    print("The number is not prime")
    check=0
if check:
    print("The number is prime")
