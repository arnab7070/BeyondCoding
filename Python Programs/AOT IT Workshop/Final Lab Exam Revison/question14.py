n = int(input("Enter the value of n: "))

for i in range(11, n+1):
    # Divisible by both 3 & 7
    if i % 21 == 0:
        print("TipsyTopsy")
    elif i % 7 == 0:
        print("Topsy")
    elif i % 3 == 0:
        print("Tipsy")
    else:
        print(i)
