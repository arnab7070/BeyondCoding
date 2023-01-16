def autoMorphic(num):
    square = str(num**2)
    if square.endswith(str(num)):
        print("Yes Automorphic")
        return
    else:
        print("No not an Automorphic")


num = int(input("Enter the number: "))
autoMorphic(num)
