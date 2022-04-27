list = [8,6,3,7,9,1]
 ######## To short this list there is a function list.sort()
# sorted_List = list.sort()
########## print(sorted_List) ###BUT IT SHOW NONE because

### when we make any lis and apply methds on it then the whole list is changed 
# so is we try to store the changed list it will not store in new variable but it 
# it will changed originaly

list.sort()
print(list)

print(len(list))

list.sort()
print(list)
## even we can not write print(list.sort()) as it also show none 

list.reverse()
print(list)

list.append(10)
print(list) ## add elements in list

list.insert(2,30)
print(list)## this method is use to insert element in given index

list.pop(6)
print(list)## use to remove element from given index

list.remove(30)
print(list)## use to remove given element 

print(list[2])

list[2] = 20 # here we can edit or change the element of list
print(list)

list2 = [1,2,3,4]

print(list + list2) ### we can combine list like this

a = int(input("enter number : " ))
b = int(input("enter number : " ))
c = int(input("enter number : " ))
d = int(input("enter number : " ))

list3 = [a,b,c,d]
print(list3)
print(sum(list3))


listAlp = ['f','g','h','i']
print(listAlp)
print(list + listAlp)
