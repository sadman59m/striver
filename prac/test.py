# class Vehicle:
#     def start(self):
#         print("vehicle starting")


# class MotorCycle:
#     def start(self):
#         print("motorcycle starting")


# class Car(Vehicle, MotorCycle):
#     def __init__(self, name):
#         self.name = name

#     def isName(self):
#         print(self.name)


# car1 = Car("toyota")

# car1.start()
# car1.isName()

from .util import calc

ans = calc.check_digit(5)

print(ans)
