class Employee:

    company = 'Google'
    salary = 10000

# here def __init__(self) is a constructure which call automatically when an object is created
    def __init__(self):
        print("Employee is created and constructure_1 is called .")

# this is constructor with parameter so when only obj is create the first will run 
#  And when obj is created with parameters then consst.. with parameter is called
    def __init__(self, name, id, work):
        self.name = name # giving all values to instance attribute of object
        self.id = id
        self.work = work
        print("Employee is created and constructure_2 is called .")

    def getData(self):
        print(f"Name of employee is {self.name}")
        print(f"Id of employee is {self.id}")
        print(f"Salary of employee is {self.salary}")
        print(f"{self.name} is working as {self.work}")
        print(end="\n")

emp1 = Employee('Shivam', 57, 'CS teacher')
emp1.getData()