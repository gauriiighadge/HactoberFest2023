def check_even_odd(num):
    num1 = str(num)
    num2 = num1[len(num1)-1]
    num3 = int(num2)
    if num3 % 2 == 0:
        print(num, "is even")
    else:
        print(num, "is odd")

while True:
    try:
        num = input("Enter a decimal number: ")
        check_even_odd(num)
        break
    except ValueError:
        print("Invalid input. Please enter a decimal number.")