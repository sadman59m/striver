if __name__ == "__main__":
    user_input = input()

    print(user_input)
    print(type(user_input))

    input_int: float = float(user_input)

    input_str: str = input_int

    print(input_str)
    print(type(input_str))
