n = int(input())
freq_dict = dict()

for i in range(n):
    word = input()
    if word in freq_dict.keys():
        freq_dict[word] += 1
    else:
        freq_dict[word] = 1

print(len(freq_dict.keys()))
for i in freq_dict.values():
    print(i, end=' ')
