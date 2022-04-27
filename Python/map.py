num = [1,2,3,4,5,6,7,8,9,10]

# for i in range(len(num)): 
#     num[i]=num[i]**2 

# print(num) 

############# map( function , iterator)

def sq(n):
    return n**2

# here result is also a list
result = map(sq,num)

list_result = list(result)

print(list_result)

# ******************************

# result2 = map(lambda n : n**2, num)
result2 = map(lambda n : n + n, num)
list_result2 = list(result2)

print(list_result2)