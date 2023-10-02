# Function to swap two numbers
def swap_numbers(a, b):
    temp = a
    a = b
    b = temp
    return a, b

# Input two numbers
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

# Displaying numbers before swapping
print(f"Before swapping: num1 = {num1}, num2 = {num2}")

# Swapping numbers
num1, num2 = swap_numbers(num1, num2)

# Displaying numbers after swapping
print(f"After swapping: num1 = {num1}, num2 = {num2}")
