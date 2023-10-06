def swap_numbers(first_number, second_number):
    """
    Swaps the values of two numbers.

    Args:
        first_number (float): The first number.
        second_number (float): The second number.

    Returns:
        Tuple[float, float]: A tuple containing the swapped numbers.
    """
    first_number, second_number = second_number, first_number
    return first_number, second_number


try:
    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))
except ValueError:
    print("Invalid input. Please enter valid numbers.")
    exit(1)


print(f"Before swapping: num1 = {num1}, num2 = {num2}")


num1, num2 = swap_numbers(num1, num2)


print(f"After swapping: num1 = {num1}, num2 = {num2}")
