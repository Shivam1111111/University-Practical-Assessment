class Employee:
    company = "Google"

    def __init__(self):
        print("This is Employee constructor")


    def e_print(self):
        print("This is Employee Method")

class Programmer:
    company = "VS_code"

    def __init__(self):
        print("This is Programmer constructor")

    def e_print(self):
        print("This is Programmer Method")

class Child ( Employee, Programmer):
    
    def __init__(self):
        super().__init__()
        print("This is Child constructor")

    def e_print(self):
        # super().e_print()
        print("This is Child method")

emp = Employee()
pro = Programmer()
chd = Child()

emp.e_print()
# Here company = google for chd bz Employee type first then programmer 
print(chd.company)

chd.c_print()


# HERE WE ALSO HAVE MULTILEVEL INHERITANCE IN WHICH [[[[ CLASS PARENT 1----> CLASS PARENT 2---> CHILD ]]]]