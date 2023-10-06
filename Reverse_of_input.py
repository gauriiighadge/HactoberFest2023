# A code to reverse the input
inp = input("Enter your input: ")

if inp.isnumeric():
    number = int(inp)
    reversed_number = 0
    while number > 0:
        remainder = number % 10
        reversed_number = (reversed_number * 10) + remainder
        number = number // 10
    print("Reversed number:", reversed_number)  # input: 12345 ==> output: 54321

else:
    reversed_string = inp[::-1]
    print("Reversed string:", reversed_string)  # input: "hello" ==> output: "olleh"
