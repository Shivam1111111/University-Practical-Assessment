# string = input("Enter string: ")
# updated_string = ""
# for ch in string:
#     if ch.islower():
#         updated_string += ch.upper()
#     else:
#         updated_string += ch.lower()

# print("Changed string : "+updated_string)

string = input("Enter String : ")

new_string = ""

for i in string:
    if i.islower():
        new_string = new_string + i.upper()
    else:
        new_string = new_string + i.lower()

print(new_string)