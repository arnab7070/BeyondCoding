import matplotlib.pyplot as plt
marks = []
print("Enter the marks of the following subjects respectively...")
subjects = ["Computer Organization", "Analog Digital Electronics",
            "Data Structures & Algorithms", "Economics", "Mathematics"]
for i in range(5):
    marks.append(int(input(f"Enter marks for {subjects[i]}: ")))
plt.pie(marks, labels=subjects)
plt.show()
