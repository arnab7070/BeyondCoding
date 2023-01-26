year = int(input("Enter the year: "))
if year % 4 == 0:
    if year % 100 == 0:
        if year % 400 == 0:
            print("Leapyear")
        else:
            print("Not a leapyear")
    else:
        print("Leapyear")
else:
    print("Not a leapyear")
