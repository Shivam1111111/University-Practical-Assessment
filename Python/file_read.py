# use open function to read the file content 
# here second parameter stands for mode and we use 'r' as r is for read
# if we do not mention modd then it will take mode as r to read by default

f = open('file.txt','r')# ---> open file for read
# f = open('file.txt') # ---> open file for read
file_data = f.read() # ---> read the content

# file_data = f.read(5) # ---> this will read only 5 char in file

print(file_data) # ---> to print file content
f.close()  # close functio on file to allow other function to use that same file
