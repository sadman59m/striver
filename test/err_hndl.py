# def test(x):
#     try:
#         if x < 10:
#             print(x)
#         else:
#             raise Exception("Erro found")
#     except Exception as err:
#         print(err)


# try:
#     from .. import main

# except Exception as e:
#     print(f"error is {e}")


# x = [-1] * 5

# print(x)

col = [1, 2, 3, 4, 5]

is_even = lambda x: x % 2 == 0

new_col = col[::-1]

print(new_col, col)
