import math
lower_limit = int(input("Enter the lower limit: "))
upper_limit = int(input("Enter the upper limit: "))
# Function to return the reversed number


def reverse(x):
    ans = 0
    while (x > 0):
        temp = x % 10
        ans = 10*ans + temp
        x //= 10
    return ans
# Function to check the number is prime or not


def isPrime(x):
    if (x == 1):
        return True
    for i in range(2, int(math.sqrt(x))+1):
        if (x % i == 0):
            return False
    return True


ans = []
for i in range(lower_limit, upper_limit+1):
    if (i == reverse(i) and isPrime(i)):
        ans.append(i)

print(ans)
