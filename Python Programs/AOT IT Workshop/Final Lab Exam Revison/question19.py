import math


def isPrime(number):
    if number == 1:
        return False
    for i in range(2, int(math.sqrt(number))+1):
        if number % i == 0:
            return False
    return True


number = int(input("Enter the number: "))
primeFactorsList = []
for i in range(1, number+1):
    if number % i == 0 and isPrime(i):
        primeFactorsList.append(i)
print(primeFactorsList)
