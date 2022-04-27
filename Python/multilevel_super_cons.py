class Employee:
    company = "Google"

    def __init__(self):
        print("This is Employee constructor")


    def e_print(self):
        print("This is Employee Method")

class Programmer(Employee):
    company = "VS_code"

    def __init__(self):
        super().__init__()
        print("This is Programmer constructor")

    def p_print(self):
        super().e_print()
        print("This is Programmer Method")

class Child (Programmer):
    
    def __init__(self):
        super().__init__()
        print("This is Child constructor")

    def c_print(self):
        super().p_print()
        print("This is Child method")

emp = Employee()
pro = Programmer()
chd = Child()

print("\n")
chd.c_print()