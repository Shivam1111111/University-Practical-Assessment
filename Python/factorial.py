n = 6
product = 1

for i in range(n):
    product = product * (i+1)

print(product)

def rec_factorial(n):
    if(n<=1):
        return 1
    return n * rec_factorial(n-1)

result = rec_factorial(6)
print(result)
    