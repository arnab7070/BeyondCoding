number = int(input("Enter the number: "))
base = int(input("Enter the base: "))
ans = ""
while number > 0:
    ans+=str(number%base)
    number //= base

ans = ans[::-1]
print(ans)