class Test:
    def __init__(self, name):
        self.__name = name
        self.__a = 10

    def set_info(sefl, name, a):
        sefl.__name = name
        sefl.__a = a

    def get_info(sefl):
        return (sefl.__name, sefl.__a)


t1 = Test("hp")


class Vehicle:
    def __init__(self, brand):
        self.brand = brand

    def showBrand(sefl):
        return sefl.brand


class Car(Vehicle):
    pass


car1 = Car("toyota")


def showName(name):
    print(name)


name = "sakib"

for ch in name:
    print(ch)
