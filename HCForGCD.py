#Python Program to find HCF or GCD
def find_gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def find_hcf(a, b):
    # HCF is the same as GCD
    return find_gcd(a, b)

def main():
    num1 = 56
    num2 = 98

    gcd = find_gcd(num1, num2)
    hcf = find_hcf(num1, num2)

    print(f"The GCD of {num1} and {num2} is: {gcd}")
    print(f"The HCF of {num1} and {num2} is: {hcf}")

if __name__ == "__main__":
    main()
