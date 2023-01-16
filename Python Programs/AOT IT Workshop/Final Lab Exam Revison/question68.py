import matplotlib.pyplot as plt
marks1 = []
marks2 = []
print("Enter the marks of the following subjects respectively...")
subjects = ["Computer Organization", "Analog Digital Electronics",
            "Data Structures & Algorithms", "Economics", "Mathematics"]
print("Enter the data for the first student: ")
for i in range(5):
    marks1.append(int(input(f"Enter marks for {subjects[i]}: ")))
print("Enter the data for the second student: ")
for i in range(5):
    marks2.append(int(input(f"Enter marks for {subjects[i]}: ")))
plt.plot(subjects, marks1, label="Student 1", color="deeppink", marker='o')
plt.plot(subjects, marks2, label="Student 2", color="green", marker='o')
plt.xlabel("Subjects")
plt.ylabel("Marks Obtained")
plt.title("Student-1 vs Student-2")
plt.legend()
plt.show()
