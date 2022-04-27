'''name = input('what is your name ? ')
num = input("which number you like ? ")
print(name + " like " + num) #here integer converted into string
'''
birth_year = input("What is your birth year ")
print(type(birth_year))
# here we cannot add or substract int or string as
# age variable with input gives string
# *****  print(2000-age)
# here 2000 is int and age is string so not possible

# so we have to convert age into int 
age = (2000-int(birth_year))
print(type(age))
print(age)

weight = input("what is your weight in labs ")
weight = int(weight)
# weight_kg = weight * 10; # here it will print weight string 10 times
# weight_kg = weight * 0.45 # here float multiply with string is not possible
weight_kg = weight * 0.45
print(weight_kg)

num = 123
num2 = 'shivam'
print(type(num))
num = str(num)

string = num + num2
print(string)