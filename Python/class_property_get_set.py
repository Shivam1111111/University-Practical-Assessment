class Employee:

    company = 'Google'
    salary = 5000
    bonus = 1000
    # totalSalary = 6000

    # def totalSalary(self):
    #     return self.salary + self.bonus # this method return value

    @property           # This getter that give some value
    def totalSalary(self):
        return self.salary + self.bonus # this property decorator return value as property

    @totalSalary.setter # This is setter that set some value
    def totalSalary(self,value):
        self.bonus = value - self.salary; 

emp = Employee()
# print(emp.totalSalary()) # This is for totalSalary function 
print(emp.totalSalary)  # here it is prorerty and difference is () after writing name of the function 
emp.totalSalary = 6500  # here it is totalsalary function of setter
print(emp.salary)
print(emp.bonus)
