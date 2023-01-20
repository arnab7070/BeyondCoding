import math


def isTwin(primeList):
    twinList = []
    for i in range(0, len(primeList)-1):
        if primeList[i+1]-primeList[i] == 2:
            twinList.append([primeList[i], primeList[i+1]])
            i += 1
    return twinList


def isPrime(number):
    if number == 1:
        return False
    for i in range(2, int(math.sqrt(number))+1):
        if number % i == 0:
            return False
    return True


lower_limit = int(input("Enter lower limit: "))
upper_limit = int(input("Enter upper limit: "))
primeList = []

for i in range(lower_limit, upper_limit+1):
    if isPrime(i):
        primeList.append(i)
print(isTwin(primeList))
