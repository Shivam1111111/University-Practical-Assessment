# set : sets are the collection of non repeatable values ( {}-set_symbol, []-List_symbol, ()-tuples_symbol, {}-dictonary-symbol )

a = {1,2,3,4,1,2} ## it will not print 1 and 2 second time because this are repeating
print(type(a))
print(a)       # set
print(list(a)) # type cast into list
print(tuple(a)) # type cast into tuple

# to creat empty set :
b = {}
print(type(b)) # this will creat empty dictonary

# to creat empty set 
c = set()
d = list()
print(type(d))
print(type(c))

########  Set methods  #########

c.add(1)
c.add(2)
c.add(3)
c.add(4)
c.add(5)
# we can add tuples between set but can not list and dist  because list are not hashable (they can be change)
c.add((1,2,3))
print(c)
###print(c[2]) this is not possible
 
print(len(c)) # print the length of C
c.remove(3) # remove any element from set 
print(c)
print('##############')
c.remove((1,2,3))

print('gggfgfhfdfhh : ')
print(c)
c.pop() # it remove any arbotary value 
# c.pop() # it remove any arbotary value 
# c.pop() # it remove any arbotary value 
print(c.pop())
print(c)
c.union()
c.intersection()

d = {2,'2',2.1,2.0}
print(d)
print(len(d))
print(a)
print(a)