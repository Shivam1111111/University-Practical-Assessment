# num = [1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4]
# freq = dict()

# for n in num:
#     if n in freq.keys():
#         freq[n] += 1
#     else:
#         freq[n] = 1

# max = -1
# num = 0
# for k, v in freq.items():
#     if v > max:
#         num = k
#         max = n

# print("key: ", num)
# print("freq: ", freq[num])

###########################

# dict = {
#     2:5,
#     3:1,
#     1:2,
#     7:2
# }

# print(max(dict.values()))

###########################

num = [1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4,8]

frq = {}

def count_frequency(list):
    
    for i in list:
        frq[i] = list.count(i)

    max = -1
    k = 0
    for key,value in frq.items():
        if value > max:
            max = value
            k = key
    
    print(k, max)


num = [1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 8]

frq = {}

def count_frequency(list):
    
    for i in list:
        frq[i] = list.count(i)

    min = 10
    k = 0
    for key,value in frq.items():
        if value < min:
            min = value
            k = key
    
    print(k, min)


count_frequency(num)