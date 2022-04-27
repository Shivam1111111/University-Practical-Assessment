class Number:

    def __init__(self,num):
        self.num = num

    def __add__(self, self2):
        return self.num + self2.num

    def __mul__(self, self2):
        return self.num * self2.num

    def __str__(self):
        return f" Number {self.num} "

    def __len__(self):
        return 

n1 = Number(10)
n2 = Number(20)
n3 = Number(39)

sum = (n1 + n2)
pro = (n1 * n2)

print(sum)
print(pro)
print(n3)
print(len(n3))

