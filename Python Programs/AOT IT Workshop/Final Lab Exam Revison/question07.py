sides = input("Enter 3 sides of a triangle: ").split()
if sides[0] != sides[1] != sides[2]:
    print("scalene triangle")
elif sides[0] == sides[1] == sides[2]:
    print("equilateral triangle")
else:
    print("isoscale triangle")
