class Employee:
    def __init__(self, name, salary):
        self.name = name
        self.salary = salary

    def showDetails(self):
        print(self.name, self.salary)

    # This is called alternative or additional constructor
    @classmethod
    def from_string(cls, string):
        return cls(string.split(" ")[0], int(string.split(" ")[1]))

# c1 = Employee("Arnab", 500)
# c1.showDetails()
# Now I want to pass argument as a string like Arnab 5000 so for that
# I will use class methods so now if I run this program


string = "Arnab 50000"
e1 = Employee.from_string(string)
e1.showDetails()
