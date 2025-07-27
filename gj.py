def sum_range(a, b):
    if a > b:
        a, b = b, a
    return sum(range(a, b + 1))

print("____________________________________________________________")

def product(num):
    result = 1
    for x in num:
        result *= x
    return result

print("____________________________________________________________")

def find_min(num):
    return min(num)

print("____________________________________________________________")

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

def count_primes(num):
    return sum(1 for x in num if is_prime(x))

print("____________________________________________________________")

def remove_number(num, num1):
    return num.count(num1)

print("____________________________________________________________")

def merge_lists(num, num2):
    return num + num2

print("____________________________________________________________")

def powers(num, degree):
    return [x ** degree for x in num]