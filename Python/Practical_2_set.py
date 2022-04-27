from collections import Counter


set1 = {1,2,3,4,5}
set2 = {1,2,8,9,5}

set_1 = {'yello', 'blue'}
set_2 = {'green', 'blue'}

# # set3 = set()  # empty set
# set3 = set1 & set2

# print(set3)

def intersect(s1,s2):
    set3 = s1 & s2
    return set3

print(intersect(set1,set2))

def union(s1,s2):
    set_3 = s1 | s2
    return set_3

print(union(set_1,set_2))


# to find maximum in set
print(max(set1))

# to find minimum in set
print(min(set1))

