import os
# Condition to check if folder exists or not
if (not os.path.exists("Data")):
    os.mkdir("Data")
# It will create 1 to 100 folders in the given directory
for i in range(0, 100):
    os.mkdir(f"Data/Day{i+1}")
