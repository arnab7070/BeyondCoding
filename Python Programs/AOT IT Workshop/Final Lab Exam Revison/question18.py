string = input("Enter the sentence: ").replace(' ', '')
upper_character = 0
lower_character = 0
for each_char in string:
    if each_char.isupper():
        upper_character += 1
    else:
        lower_character += 1
print(f"No. Of Upper case characters : {upper_character}")
print(f"No. Of Lower case characters : {lower_character}")
