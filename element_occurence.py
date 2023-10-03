# Python code to count the number of occurrences of an element in a list Using a Loop 
def countX(lst, x):
    count = 0
    for ele in lst:
        if (ele == x):
            count = count + 1
    return count
 
 
# Driver Code
lst = [8, 6, 8, 10, 8, 20, 10, 8, 8]
x = 8
print('{} has occurred {} times'.format(x,countX(lst, x)))

# Output
# 8 has occurred 5 times
