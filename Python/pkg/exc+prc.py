# def addition(a, b, *args, option=True): 
#    result = 0 
#    if option: 
#         for i in args: 
#             result += i 
#             return a + b + result 
#    else: 
#         return result 

# def addition(a, b, *args, option = True):   
#    result = 0 
#    if option: 
#       for i in args: 
#         result += i 
#       return a + b + result 
#    else: 
#       return result : 

# def arg_printer(*args, *tpl): 
#    print(args) 

lst = [1,4,5] 
tpl = ('a','b',4) 
arg_printer(*lst, *tpl, 5, 6) 
(1, 4, 5, 'a', 'b', 4, 5, 6) 


# print(addition(1,4,5,6,7)) 
