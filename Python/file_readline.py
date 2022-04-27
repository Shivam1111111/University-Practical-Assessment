f = open('file.txt','r')
file_data = f.readline() # this function only read first line of text file
print(file_data)

file_data = f.readline() # this function only read second line of text file
print(file_data)

f.close()
# in output there is a huge space between files bz it gives \n after a line