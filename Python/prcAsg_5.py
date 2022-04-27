print("20CS057 Patel Shivam")
try:
    a = 10/0  
    print (a)
except ArithmeticError:
        print ("Divide by zero.")
else:
    print ("Success.")

