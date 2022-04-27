class Employee:

    salarry = 5000

    # def details(self, name, id):
    #     self.name = name
    #     self.id = id

        
    # def display(self):
    #     print("Name of employee : ", self.__name)
    #     print("Id of employee : ", self.__Id)

    def __setattribute__(self, name, id):
        self.__name = name
        self.__id = id
    
    def __getattribute1__(self):
        return self.__name

    def __getattribute2__(self):
        return self.__id

emp1 = Employee()
emp2 = Employee()

emp1.__setattribute__('Shivam', 57)
print("Name od emp1 is ",emp1.__getattribute1__())
print("Name od emp1 is ",emp1.__getattribute2__())

emp2.__setattribute__('Vatsal', 63)
print("Name od emp2 is ",emp2.__getattribute1__())
print("Name od emp2 is ",emp2.__getattribute2__())

