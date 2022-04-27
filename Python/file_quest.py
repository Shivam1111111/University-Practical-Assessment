# f = open('file_other.txt','r')
# t = f.read()

# if 'xyz' in t:
#     print("Yes")
# else:
#     print("No")

# f.close()
############################################################################

# for i in range(2,20):
#     with open(f"{i}'s Multiplication table.txt",'a') as f:
#         for j in range(1,11):
#             f.write(f"{i} X {j} = {i*j}\n")

#     break

############################################################################

# words = ["donkey","monkey","dog"]

# with open('file.txt', 'r') as f:
#     data = f.read()

# for i in words:
#     data = data.replace(i,'#%&@#$#$')
#     with open('file.txt','w') as f:
#         f.write(data)

############################################################################

# with open('file.txt','r') as f:
#     data = f.read()

# with open('copy.txt','w') as f:
#     f.write(data)

############################################################################
# code to wipe out the data from file 

file_name = 'copy.txt'
with open(file_name,'w') as f:
    f.write("")