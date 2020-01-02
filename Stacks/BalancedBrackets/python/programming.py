


def balancedBrackets(string):
    """
    Checks the given string of balanced Brackets and returns True if it
    In O(n) time and O(n) space where n is the length of the string
    Args:
        param1:(string) string to check
    Returns: boolean
    """
    brackets = "[](){}"
    stack = []
    stack.append(string[0])
    for element in string[1:]:
        # check if the next char is a Bracket and add it to the stack
        if element not in brackets:
            continue
        stack.append(element)

        if element == ")":
            if stack[-2] == "(":
                stack.pop()
                stack.pop()
            else:
                return False
 
        if element == "]":
            if stack[-2] == "]":
                stack.pop()
                stack.pop()
            else:
                return False
        
        if element == "}":
            if stack[-2] == "{":
                stack.pop()
                stack.pop()
            else:
                return False

    # check if stack is not empty return False 
    if len(stack) != 0:
        return False
    # if the stack is empty
    return True
