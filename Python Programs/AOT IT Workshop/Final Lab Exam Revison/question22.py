numerator = 2
denominator = 9

user_input = int(input("Enter the number: "))
ans = 0
for i in range(1, user_input+1):
    if (i % 2 == 1):
        ans += (numerator/denominator)
    else:
        ans -= (numerator/denominator)
    # Update the values
    numerator += 3
    denominator += 4
print(ans)
