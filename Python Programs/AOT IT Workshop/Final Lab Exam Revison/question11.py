import math


def isPalindrome(number):
    reverse = 0
    duplicate = number
    while number > 0:
        reverse = reverse*10 + number % 10
        number //= 10
    return (duplicate == reverse)


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
    if isPrime(i) and isPalindrome(i):
        print(i, end=" ")
