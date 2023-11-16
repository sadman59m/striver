def outer():
    a = 10
    print(a)

    def inner():
        a = 20
        print(a)

    inner()


# a = 5

# print(a)

# outer()

# print(globals())

# a = 7
# b = 7

# print(globals())


def outer(a):
    def inner():
        a = 10
        print(a, a)
        print(locals())

    inner()


outer(20)
