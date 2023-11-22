

def odd_numbers(numbers):
    odd_array = []
    for number in numbers:
        if number%2 != 0:
            odd_array.append(number)
            
    return odd_array


numbers = [1, 2, 3, 4, 5, 6]

odd_numbers = odd_numbers(numbers)

print(odd_numbers)


"""Now finding evens using a lambda function"""
even_numbers = list(filter(lambda x: x%2 == 0, numbers))

print(even_numbers)


"""checking out for a single number"""
check_odd = lambda x: x%2

number = int(input())

if check_odd(number):
    print(f"{number} is odd")
else:
    print(f"{number} is even")