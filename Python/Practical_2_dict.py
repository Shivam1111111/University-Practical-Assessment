mydict = {
    'String' : "Shivam",
    'Intiger' : 10,
    2 : 20,
    "list" : [1,2,3,4,5],
    'tuple' : (10,20,30,40),
    'set' : {100,200,'shiv'},
    'Anotherdict' : {
            "float" : 12.5,
            'String' : 'Hello'
    }
}
# print(mydict);
# print(mydict.values());
# print(mydict.items());
# print(mydict.keys());

def is_key_present(key_name):
    if(key_name in mydict):
        print( str(key_name) + " is present in dictniory ")
    else:
        print("Not present")

is_key_present('tuple');
is_key_present(2); # to find and write intiger key we have to convert it into string 

dict_1 = {'John': 15, 'Rick': 10, 'Misa' : 12 }
dict_2 = {'Bonnie': 18,'Rick': 20,'Matt' : 16 }

dict_1.update(dict_2)
# dict_1.update(mydict)

print(dict_1)

print(sum(dict_1.values()))

######## to concatenate dictionary #######

dict_1 = {1: 15, 2: 10, 3 : 12 }
dict_2 = {4: 18, 5: 20, 6: 16 }
dict_3 = {}

for item in (dict_1,dict_2,dict_3):
    dict_3.update(item)

print(dict_3)