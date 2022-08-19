t1 = (11,[22,33],44,55)
newList = list(t1)
newList[1][0] = 222
t2 = tuple(newList)
print(t2)
