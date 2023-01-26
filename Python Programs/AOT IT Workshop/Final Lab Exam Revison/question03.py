num = int(input("Enter the number of elements: "))
empty_list = []
print("Now enter the elements: ")
duplicate = num
while duplicate > 0:
    empty_list.append(int(input()))
    duplicate -= 1
total_sum = sum(empty_list)
mean = total_sum/num
print(f"The mean of the numbers are: {mean}")
empty_list.sort()
if len(empty_list) % 2 == 0:
    median = (empty_list[int(len(empty_list)/2)] +
              empty_list[int(len(empty_list)/2) - 1])/2
else:
    median = empty_list[int(len(empty_list)/2)]
print(f"The median of the numbers = {median}")
