data_set = [{'a': 'one', 'b': 'two', 'c': 'three', 'd': 'four', 'e': 'five', 'f': 'six'}]
# How to extract key-value pairs in bold from dictionary in list?
print("Extract key-value pairs from dictionary in list")
for i in data_set:
    for key,value in i.items():
        print(f"{key} => {value}")
# How to add these extracted key-value pairs to new dictionary
print("Add extracted key-value pairs to new dictionary")
dict1 = (data_set[0])
print(dict1)
# How to convert new dictionary to list?
print("Dictionary to list")
newlist = list(dict1.items())
print(newlist)