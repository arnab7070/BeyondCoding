n = int(input("Enter the value of n: "))
m = int(input("Enter the value of m: "))


def evenOrOdd(number):
    if number % 2 == 0:
        print(f"{number} is even")
    else:
        print(f"{number} is odd")


for i in range(1, n+1):
    if i % m == 0:  # condition for divisible
        print(f"{i} is divisible by {m} & ", end=" ")
        evenOrOdd(i)
