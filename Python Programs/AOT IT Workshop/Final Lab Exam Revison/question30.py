numbers = input("Enter a number (Enter 'q' to see the average): ").split()
total_sum = 0
index = 0
while numbers[index] != 'q':
    total_sum += int(numbers[index])
    index += 1
print(total_sum/(len(numbers)-1))
