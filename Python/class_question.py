class Calculator:

    def __init__(self,number):
        self.number = number

    def get_square(self):
        print(f"Square of {self.number} is {self.number **2}")

    def get_cube(self):
        print(f"Cube of {self.number} is {self.number **3}")

    def get_squareRoot(self):
        print(f"Square Root of {self.number} is {self.number **0.5}")

num = Calculator(9)

num.get_square()
num.get_cube()
num.get_squareRoot()
