# num = int(input('Enter whict table you want'))

# for i in range(1,11):
#     # print(str(num) + " X " + str(i) + ' = ' + str(num*i))
#     #####n IMP  Festent
#     print(f"{num} X {i} = {num*i}")

list = ["Harry", "Shivam", "Shivaraj", "Vatsal"]

for item in list:
    # print(item[0])'
    # print(list[0])
    if(item[0] == 'S'):
        print(f"Good Morning😄 {item}")
        print('🧖')


for item in list:
    # print(item[0])'
    # print(list[0])
    if item.startswith("S"):
        print(f"Good Morning😄 {item}")
        print('🧖')

i = 10
num = 4
while i>0:
    print(f"{num} X {i} = {num*i}")
    i=i-1
