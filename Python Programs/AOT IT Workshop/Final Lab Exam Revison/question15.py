user_input = input("Enter hyphen-seperated words: ").split(sep='-')
user_input.sort()
answer = '-'.join(user_input)
print(answer)

# another method to add hyphen as a seperator
# count = 0
# for i in user_input:
#     answer += i
#     if (count < len(user_input)-1):
#         answer += '-'
#         count += 1
# print(answer.replace(' ', '-'))
