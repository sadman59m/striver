mat1 = [[1, 2], [3, 4]]
mat2 = [[5, 7], [6, 9]]

# mat3 = [[0 for _ in range(2)], [0 for _ in range(2)]]

mat3 = [[0] * 2, [0] * 2]

# for i in range(len(mat1)):
#     for j in range(len(mat2)):
#         for k in range(len(mat2)):
#             mat3[i][j] = mat1[i][k] * mat2[k][j]


for i in range(len(mat1)):
    for j in range(len(mat2)):
        for k in range(len(mat2)):
            mat3[i][j] += mat1[i][k] * mat2[k][j]

# print(mat3)

even_or_odd = lambda number: "odd" if number % 2 else "even"

# print(even_or_odd(5))

list_nor = [1, 2, 3]
list_sq = [lambda x=x: x**2 for x in list_nor]

# for el in list_sq:
#     print(el())

# from datetime import date

# today = date.today()

# print(today)

# in_x = int(5)
# int_y = int(2)

# res = in_x // int_y

# print(type(res))


# def sum_n(*args):
#     t_sum = 0
#     for ag in args:
#         t_sum += ag
#     return t_sum


# print(sum_n(1, 2, 3))


# def test_args(*args):
#     return args


# print(test_args(1, 2))


# def test_kwrargs(**kwargs):
#     if "name" in kwargs:
#         print(kwargs["name"])


# test_kwrargs(name="sakib")

test_list = [1, 2, 3]

ans_list = list(filter((lambda x: x % 2 == 0), test_list))

print(ans_list)


def check_digit(x):
    if len(x) == 0:
        return False
    for ch in x.strip():
        if ch >= "0" and ch <= "9":
            continue
        else:
            return False
    return True


x = str("")
print(check_digit(x))
