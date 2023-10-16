def sieve_of_eratosthenes(limit):
    primes = [True] * (limit + 1)
    primes[0] = primes[1] = False

    for p in range(2, int(limit**0.5) + 1):
        if primes[p]:
            for i in range(p * p, limit + 1, p):
                primes[i] = False

    prime_numbers = [p for p, is_prime in enumerate(primes) if is_prime]
    return prime_numbers

limit = int(input("Enter a limit to find prime numbers up to: "))
prime_numbers = sieve_of_eratosthenes(limit)
print("Prime numbers up to", limit, "are:", prime_numbers)
