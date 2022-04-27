mydict = {
    "Shivam" : "is good boy",
    'Intiger' : 2,
    "Marks" : [1,2,3,4,5],
    'tuple' : (10,20,30,40),
    'set' : {100,200,'shiv'},
    'Anotherdict' : {
            "float" : 12.5,
            'String' : 'Hello'
    }
}

print(mydict['Shivam'])
print(mydict['Marks'])
print(mydict['Anotherdict']['float'])  
print(mydict['Anotherdict'])  

## methods of Dictnioary 

print(mydict.keys()) # making list of keys
print(type( mydict))
print(type( mydict.keys()))
print(list(mydict.keys())) # making list of keys
print(list(mydict.values()))# making list of values 

print(mydict.keys())   # printing all keys
print(mydict.values())   # printing all values
print(mydict.items())  # print (key,values)...

print(mydict)       

updatedDict = {          # to add new keys and values in old dictnioary 
        'Shivaraj' : 'friend',
        'hamil' : 'friend',
        'Shivam' : 'Is good as well as cool boy',  # this key is already exist in old dict so to update here the value of old key i change
        1 : 2
}
mydict.update(updatedDict)
print(mydict)

print(mydict['Shivam'])    # this both method is for return valus of key but...
print(mydict.get('Shivam')) 


print(mydict.get('Shivam_1')) # but this well pass NULL value called None not error
# print(mydict['Shivam_1'])   # in this method if the key is not in dictnioary then throws an error

mydict['Marks'] = [9,7,5] # to update key in original dictionary (over ride the value)
mydict['new_list'] = [1.2,1.3,1.4] # to add new key in dictionary
print(mydict)