# x - x^2 /2! + x^3 /3! - x^4 /4! + x^5 /5! - x^6 /6! (Input x)
import math
x = int(input("Enter the value of x: "))
ans = 0
for i in range(1, 7):
    if i % 2 == 1:
        ans += (x**i)/math.factorial(i)
    else:
        ans -= (x**i)/math.factorial(i)
print(f"Answer: {ans}")
