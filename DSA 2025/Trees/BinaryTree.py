class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None


# insertion in a binary tree
def insert(node, data):
    if node is None:
        return Node(data)
    else: 
        if data < node.left:
            node.left = insert(node.left,data)
        else:
            node.right = insert(node.right,data)
        
        return node


def search_node(node,data):
    if node is None:
        return False
    
    if node.data == data:
        return True
    
    else:
        if data < node.left:
            return search_node(node,data)
        else:
            return search_node(node,data)
        

def inorder_traversal(node):
    # pass
    if node:
        inorder_traversal(node.left)
        print(node.data,end=" ")
        inorder_traversal(node.right)

def preorder_traversal(node):
    if node:
        print(node.data,end=" ")
        preorder_traversal(node.left)
        preorder_traversal(node.right)

def postorder_traversal(node):
    if node:
        postorder_traversal(node.left)
        postorder_traversal(node.right)
        print(node.data,end=" ")