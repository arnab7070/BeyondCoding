a = int(input("Enter the number of items: "))
price = 0
if a<10:
    price = a*120
elif a<=99:
    price = a*100
else:
    price = a*70
print(f"Total cost {price}")
