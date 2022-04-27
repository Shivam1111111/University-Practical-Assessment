fruits = ('apple','banana','grapes','papaya') # using tuple

for item in fruits:
    print(item)

# new for loop with else statement

for i in range(10):
    print(i)
else:               # when condition suuccessifully finish then it will print this using else :
    print("Done")


for i in range(10):
    print(i)
    if(i == 5):
        break       # now else part will not print because loop is break not completely exist so..;
else:               
    print("Done")

####### continue key word ########

print('\n')

for i in range(10):
    if i == 5:
        continue # when i == 5 the continue will and run skip all downword function for that particular iteration or number; 
    print(i)

####### pass key word ########
# pass keyword is use to skip thing , it is a null statement it comand to do nothing

# i = 4
# if  i < 10:

# for i in range(8) :    

# print("Hello world")  # this will throw error as there is a if condition or for or while

i = 4
if  i < 10:
    pass
    
for i in range(8) :    
    pass

def sum(a,b):
    pass

print("Hello world")  # now it will print 