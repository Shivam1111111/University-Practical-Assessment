
# tuple is similar as list but it unmmutable(we cannot change the values or edit)

tuple = (1,2,3,4,5,3,9,3)

print(tuple)
print(tuple[0])
print(type(tuple))

# to find the length of tuple
print(len(tuple))

#### tuple[3] = 8 we can not change or edit tuple
# print(tuple)

t = () # it is an empty tuple
t1 = (1) # it also an empty tuple as we can not give single element in tuple like this if we want we have to add coma
t2 = (1,) # this is a tuple with single element 

print(t)
print(t1)
print(t2)

##### methods

print(tuple.count(3))## this method helps to count the mention element occure in tuple
print(tuple.index(4))## return the index number of written element

