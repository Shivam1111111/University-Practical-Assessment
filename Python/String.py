Name = 'My name is shivam'
first = 'shivam'
last = 'patel'

#  print function of python always gives new line after complition but to avoid thid we can use end function like
print("Hello ",end = "" )
print("My ",end = "")
print("Shivam ",end = "")

#   0123456789.....
print(Name[4])   # print 4th index
print(Name[0:6]) # print till 6th index
print(Name[:])  # print whole string
print(Name[4:]) # print after 4th index
print(Name[:6])  # print till 6th index
print(Name[-2])  # print last second digi2
print("####")
print(Name[::-1]) # reverse string
print(Name == Name[::-1])
print("####")
print(f'{first} {last} is good boy') # calles formulated string
print(len(Name))
print(Name.upper())
print(Name.lower())
print(Name.find('a'))
print(Name.find('Name')) # if there is nothing related to String it gives -1
print(Name.find('name'))
print(Name.replace('My','Jy'))# we can also rwplesh letters
# now cecking
print('shivam' in Name)# this gives boolean value
print('Shivam' in Name)

Name2 = "mathemathic"
print("######")
c = Name2[0:11:2] #the first show start and last shows skiping size and middle shows ennding
print(c)

print(Name.endswith('shivam'))#if the string ends with given string the true else false
print(Name2.count("m"))# use to count the number of letters in string
print(Name2.capitalize())#Make the first word in capital

print("My name is spatel.\n I am a good boy")#\n for new line

### IMP QUESTION
print('\n\n')
letter = '''Dear NAME
you are good
Date is DATE'''

Name = input('Enter Name \n')
Date = input('Enter Date \n')

letter = letter.replace('NAME',Name)# Here we cant write letter.replace.. directly 
letter = letter.replace('DATE',Date)   # we have to  dify it with letter = letter.replace....

print(letter)

