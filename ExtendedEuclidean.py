# Python Program for Extended Euclidean Algorithm 
def extended_gcd(a, b):
    if a == 0:
        return b, 0, 1
    else:
        gcd, x, y = extended_gcd(b % a, a)
        return gcd, y - (b // a) * x, x

def main():
    # Example usage
    a = 48    #int(input("Enter the first number (a): "))
    b = 18    #int(input("Enter the first number (a): "))

    gcd, x, y = extended_gcd(a, b)

    print(f"The GCD of {a} and {b} is: {gcd}")
    print(f"Coefficients x and y are: {x}, {y}")
    print(f"{a}*{x} + {b}*{y} = {gcd}")

if __name__ == "__main__":
    main()

