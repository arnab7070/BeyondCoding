import math
def get_can(height, width, cover):
    print(f"You will need {math.ceil(height*width/cover)} cans of paint")

height = int(input("Enter the height of the wall: "))
width =  int(input("Enter the width of the wall: "))
cover = int(input("Enter how much area a can of paint can cover: "))

get_can(height,width,cover)