def fibbonacci(x):
    if x <= 1:
        return x
    return fibbonacci(x-1) + fibbonacci(x-2)


n = int(input("Enter the value of n: "))
print("The following fibbonacci series is")
for i in range(n):
    print(fibbonacci(i), end=" ")
