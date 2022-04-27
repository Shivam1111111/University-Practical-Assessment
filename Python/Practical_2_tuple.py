tuple = (1,'Shivam',3.5)
tuple2 = (1,2,3.5,4)

print(tuple[2])

tuplex = (4, 6, 2, 8, 3, 1) 
print(tuplex)
#tuples are immutable, so you can not add new elements
#using merge of tuples with the + operator you can add an element and it will create a new tuple
tuplex = tuplex + (9,)
print(tuplex)
#adding items in a specific index
tuplex = tuplex[:5] + (15, 20, 25) + tuplex[:5]
print(tuplex)
#converting the tuple to list
listx = list(tuplex) 
print(listx)
# #use different ways to add items in list
listx.append(30)
print(listx)

# tuplex = tuple(listx)
# print(tuplex)

#to convert a tple into string

tup_s = ('s','h','i','v','a','m')
print(tup_s)
str = ''.join(tup_s)
print(str)

# To find the length of tuple
length = len(tuple)
print(length)

