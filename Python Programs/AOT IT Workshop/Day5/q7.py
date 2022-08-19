sampleDict = {'a': 100, 'b': 200, 'c': 300}
print(f"Getting key corresponding to minimum value from the dictionary is '{min(sampleDict, key=sampleDict.get)}'")