########################################

# dict_1 = {'John': 15, 'Rick': 10, 'Misa' : 12 }
# dict_2 = {'Bonnie': 18,'Rick': 20,'Matt' : 16 }
# dict_3 = {**dict_1,**dict_2}
# print(dict_3)

########################################

dict_1 = {'John': 15, 'Rick': 10, 'Misa' : 12 }
dict_2 = {'Bonnie': 18,'Rick': 20,'Matt' : 16 }

dict_1.update(dict_2)
print(dict_1)