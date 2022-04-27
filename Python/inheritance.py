from platform import python_branch

class Parent:
    company = "google"

    def __init__(self):
        print("This is parent class constructor")

    def show_parent(self):
        print("This is parent class method")

    def othor(self):
        print("This is second parent class method")

    
class Child(Parent):
    language = 'python'

    def __init__(self):
        print("This Child class constructor")

    def show_parent(self):
        print("This child class method")

    def show_chile(self):
        print("This is second child class method")

p = Parent()
c = Child()

p.show_parent()
c.show_parent()

c.othor()
print(c.company)
print(c.language)