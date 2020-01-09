def inOrderTraverse(tree, array):
    # Write your code here.
	if tree == None:
		return array
		
	array = inOrderTraverse(tree.left, array)
	array.append(tree.value)
	array = inOrderTraverse(tree.right, array)
	return array
def preOrderTraverse(tree, array):
    # Write your code here.
	if tree == None:
		return array
    array.append(tree.value)
	array = preOrderTraverse(tree.left, array)
	array = preOrderTraverse(tree.right, array)
	return array


def postOrderTraverse(tree, array):
	if tree == None:
		return array
    # Write your code here.
    array = postOrderTraverse(tree.left, array)
	array = postOrderTraverse(tree.right, array)
	array.append(tree.value)
	return array
