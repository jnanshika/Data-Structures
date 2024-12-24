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
        return None
        
    #push
    def push(self, val):
        self.stack.append(val)

    #size
    def size(self):
        return len(self.stack)

class Solution:
    def nextGreaterElement(self, nums1, nums2):
        return None