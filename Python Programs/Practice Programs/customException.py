# Custom errors are required if we want to throw an error beyond python's
# built in errors. Then we use 'Raise' keyword to do so.
a = int(input("Enter the age: "))
if a >= 18:
    print("Can Drive")
else:
    raise ValueError("Age should be greater than 18 to continue.")
