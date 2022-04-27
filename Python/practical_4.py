list1 = [6, 1, 6, 3, 4, 5, 2, 4]

# to remove duplicate elements we can convert that list into set and then again list bz set do not contain duplicate element

setx = set(list1)
listx = list(setx)

# or

# listx = list( set(num) )

print(listx)

# print(listx[len(listx)-2])

# OR

print(listx[-2])

   