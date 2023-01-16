line_number = int(input("Enter the number of lines to be printed: "))
for i in range(line_number):
    numbers = []
    while i >= 0:
        numbers.append(str(2**i))
        i -= 1
    line_string = " ".join(numbers)
    print(line_string)
