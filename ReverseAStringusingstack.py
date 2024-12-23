from collections import deque
class stackClass:
    def __init__(self):
        self.stack = deque()
    
    #is empty
    def isEmpty(self):
        return len(self.stack) == 0
    
    #pop
    def pop(self):
        if not self.isEmpty():
            return self.stack.pop()
        
    #push
    def push(self, val):
        self.stack.append(val)

    #size
    def size(self):
        return len(self.stack)
class Solution:
    def reverseString(self, s) -> None:
        #using stack
        container = stackClass()
        for i in s:
            container.push(i)
        length = container.size()
        for i in range(0, length):
            value = container.pop()
            s[i] = value

solutionOBJ = Solution()
# Taking input from the user
input_str = input("Enter numbers separated by spaces: ")
li = list(map(str, input_str.split()))
"""li = []
size = int(input("Enter the size of list: "))
print("Enter Values: ")
for i in range (0, size):
    val = input( end= " ")
    li.append(val)"""
print(f"original word: {li}")
solutionOBJ.reverseString(li)
print(f"reversed word: {li}")