# def sum(marks):
#     return (marks[0] + marks[1] + marks[2] + marks[3])

# mark = [3,6,8,12]
# result = sum(mark)
# print(result)

# def greet(name):
#     print('Good Morning ' + name)

# greet('Shivam')

# def add(a,b): 
#     return a+b

# rst = add(5,7)  # here we have passed value
# print(rst)

#  what happen when we do not pass argument then it show an error but if set dfault value to function like

def add (a=3,b=5):
    return a+b

rust1 = add()
rust2 = add(7,9)
print(rust1)
print(rust2)

def pattern(n):
    for i in range(n):
        for j in range(n-i):
            print('*',end=" ")
        print(end="\n")

pattern(3)

def pattern1(n):
    for i in range(n):
        print('*' * (i+1))
pattern1(3)

def pattern2(n):
    for i in range(n):
        print('*' * (n-i))
pattern2(3)

##############

def print_f(name):
    p = "Hello " + name
    return p

print(print_f('shivam'))
