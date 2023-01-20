import math


def isPrime(number):
    if number == 1:
        return False
    for i in range(2, int(math.sqrt(number))+1):
        if number % i == 0:
            return False
    return True


lower_limit = int(input("Enter lower limit: "))
upper_limit = int(input("Enter upper limit: "))

for i in range(lower_limit, upper_limit+1):
    if isPrime(i):
        print(i, end=" ")
