class Railway:


    station = 'std_anand' # This class attribute, bz it is common for all object of this class 
    salary = 100

# If we want to change the value of class attribute like station variable the we can do so from class

    def details(self):
        print(f"Name is {self.name}")
        print(f"salary is {self.salary}")
        print(f"Train is {self.train}")

    # def details(self, name, train):
    #     self.name = name
    #     self.train = train
    #     print(f"name is {self.name}")
    #     print(f"train is {self.train}")

object1 = Railway()
object2 = Railway()

Railway.station = 'std_Surat' # (class attribute) This code for changing the value of class attribute
print(object1.station)

# IMP Instance attribute is the attribute that bellong ton object or attribute of object which can be different for all object

object1.name = 'Shivam'  # this all name and train are instance attribute which has different values according to class
object1.train = 'Raaj express' 
object1.salary = 200
object1.details()

object2.name = 'Raj' 
object2.train = 'garib express' 
# object2.salary = 400
object2.details()

# OTHER IMP THING instance attribute has more priority then class attribute see salary

# object1.details('Shiva','RJ express')
# object2.details('raj','RJ express')
# print(object1.details())
# print(object2.details())
