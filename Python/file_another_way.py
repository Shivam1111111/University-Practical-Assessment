# the best way to open amd close a file is to use "" with statement "

with open ('file_other.txt','w') as f:
    f.write("Hi there my name is xyz")


with open ('file_other.txt','r') as f:
    a = f.read()
    print(a)

