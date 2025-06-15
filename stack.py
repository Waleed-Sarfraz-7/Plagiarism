class Node:
    def __init__(self, Data):
        self.Data = Data
        self.Next = None
class Stack:
    def __init__(self):
        self.Head = None

    def IsEmpty(self):
        return self.Head is None
    def MakeStackEmpty(self):
        self.Head=None
        return
    def Push(self, Data):
        NewNode = Node(Data)
        if self.Head is None:
            self.Head=NewNode
            return
        temp=self.Head
        while temp.Next is not None:
            temp=temp.Next
        temp.Next=NewNode
    def top(self):
        if self.IsEmpty():
            return None
        temp=self.Head
        while temp.Next is not None:
            temp=temp.Next
        return temp.Data

    def DisplayStack(self):
        current = self.Head
        while current:
            print(current.Data.Display())
            current = current.Next

    def Size(self):
        count = 0
        current = self.Head
        while current:
            current = current.Next
            count += 1
        return count
    def get_last(self):
        if self.IsEmpty():
            return None  # Stack is empty
        current = self.Head
        while current.Next:  # Traverse until the last node (Next is None)
            current = current.Next
        return current.Data  # Return the Data (card) of the last node
    def cut_off_at(self, node):
        """Cuts off the linked list at the given node, effectively removing all nodes after it."""
        if not node:
            return  # If the node is None, do nothing
        current = self.Head
        if self.Head.Data==node.Data:
            self.Head=None
        
        # Traverse the list to find the node just before the given node
        while current and current.Next != node:
            current = current.Next
        # If the node is found, truncate the list after this node
        if current and current.Next == node:
            current.Next = None

    def RemoveFrom(self, card):
        """Removes the specified card and all cards after it."""
        current = self.Head
        removed_stack = Stack()
        while current and current.Data != card:
            current = current.Next
        if current:
            removed_stack.Head = current  # Set the head of the removed stack
            self.cut_off_at(current)  # Assuming you have implemented cut_off_at correctly
        return removed_stack


    def PushStack(self, other_stack):
        if not other_stack.Head:
            return  # Nothing to push if the other stack is empty

        if not self.Head:
            # If the current stack is empty, just set its head to the other stack's head
            self.Head = other_stack.Head
        else:
            # Traverse to the end of the current stack and link it to the new stack
            current = self.Head
            while current.Next:
                current = current.Next
            current.Next = other_stack.Head
