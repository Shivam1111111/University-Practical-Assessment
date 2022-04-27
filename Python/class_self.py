class Employee:

    company = 'Google'
    salary = 10000

# And self is npthing but it is  objects which are made in main function and
#  pass as an argument with function {eg : see 1234} so that we can print all instance
#  attribute and class attributs of that object

# If we remove self from here then it will throw error : 
# Like :: TypeError: details() takes 1 positional argument but 2 were given
# emp1.details(57) --> Eployee.details(emp1,57) this code is converted into this form
# so it passes 2 arguments object and 57 and when we remove self then it will equel to id but 
# what about object as self is equal to object

# (Important thing we can write any thing insted of self) 
    def details(self,id):
        self.id = id # set id in self.id(obj.id) it is instance attribute along with name.
        print(f"Name of employee is {self.name}")
        print(f"Id of employee is {self.id}")
        print(f"Salary of employee is {self.salary}")
        print(f"{self.name} is working in {self.company}")
        print(end="\n")

# what if we want to make function which do not require self or object as an argument 
# Then we use  @staticmethod  which convert calling code into :
# emp1.greet() --> Employee.greet()

    @staticmethod
    def greet():
        print("Good Morning, sir\n")

emp1 = Employee()
emp2 = Employee()

emp1.name = 'Shivam'
emp1.salary = 15000
# Here did not mention emp1.id = 57 because we mention it into function and
#  we only have to pass value so it go to function and 
# set value at there in : self.id = id(id which we passed) 

emp1.details(57) # this calling code converted into {1234} 
# {1234} Eployee.details(emp1,57)
emp1.greet()
# Employee.greet()

emp2.name = 'Vatsal'
emp2.details(16)  # {1234}Employee.details(emp2,16)
emp2.greet() # Employee.greet()


