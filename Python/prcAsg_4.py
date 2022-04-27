from itertools import combinations
print("20CS057 Patel Shivam")
num = [int(n) for n in input("Enter an array: ").split()]
k = int(input("Enter the sumation you want to check combination about: "))
count = 0
for i in range(1, len(num)+1):
    for c in combinations(num, i):
        if sum(c) == k:
            count += 1
print(count)
