binaryString = input("Enter the string: ")
isBinary = True
for i in binaryString:
    currentCharacter = i
    if (not (currentCharacter == '0' or currentCharacter == '1')):
        print("NO")
        isBinary = False
        break
if (isBinary):
    print("YES")
