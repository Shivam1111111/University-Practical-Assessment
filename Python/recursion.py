def factriol(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factriol(n-1)

def factrio_forLoop(n):
    product = 1
    for i in range(n):
        product = product * (i+1)
    return product

num = int(input("Enter number "))
print(factriol(num))
print(factrio_forLoop(num))


n = 6

for i in range(n):
    print("*" * (n-i))