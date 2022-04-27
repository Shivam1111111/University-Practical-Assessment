a = int(input())
output = []

for i in range(a):
    word = input()
    length = len(word)
    mid = length // 2

    if length % 2 == 0:
        if sorted(word[:mid]) == sorted(word[mid:]):
            output.append("YES")
        else:
            output.append("NO")
    else:
        if sorted(word[:mid]) == sorted(word[mid+1:]):
            output.append("YES")
        else:
            output.append("NO")

for o in output:
    print(o)