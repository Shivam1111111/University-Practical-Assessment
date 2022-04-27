class Stack:
    def __init__(self):
        self.elements = []

    def push(self, data):
        self.elements.append(data)

    def pop(self):
        return self.elements.pop()

stack = Stack()
print("20CS057 Patel Shivam")
print("Pushing 4 elements: 20,30,40,50")
stack.push(20)
stack.push(30)
stack.push(40)
stack.push(50)
print("Popping 2 elements:")
print(stack.pop())
print(stack.pop())
