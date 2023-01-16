def checkPangram(str):
    found = {}
    for char in str:
        found[char] = True
    if (len(found) == 26):
        # that means all 26 alphabets are available
        print("Yes Pangram")
        return
    else:
        print("No not a Pangram")


str = input("Enter the sentence: ").lower().replace(' ', '')
checkPangram(str)
# The quick brown fox jumps over the lazy dog
