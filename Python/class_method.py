
class Employee:

    company = 'Google'
    salary = 5000

    # If we want to change the salary (class attribute not in instance attribute) then

    # def changeSalary(self,sal):
    #     self.salary = sal # This function will not change the value of class attribute but it will add new instance attribute
    
    # def changeSalary(self,sal):
    #     self.__class__.salary = sal 

    @classmethod
    def changeSalary(clas,sal):
        clas.salary = sal 

emp = Employee()

print(emp.salary)
emp.changeSalary(3000)
print(emp.salary)
# Here for emp salary become 3000 but in class and for other obj salary is 5000
print(Employee.salary)

# emp2 = Employee()
# print(emp2.salary)

# Here we use __class__ and passing class as cls insted of self to change the value of class attribute
# print(emp.salary)
# emp.changeSalary(3000)
# print(emp.salary)
# print(Employee.salary)

# emp2 = Employee()

# print(emp2.salary)

# Here we use classmethod decorator in which we can assess the class and change the value in class attribute
print(emp.salary)
emp.changeSalary(2000)
print(emp.salary)
print(Employee.salary)

emp2 = Employee()

print(emp2.salary)

emp3 = Employee()
print(emp3.salary)