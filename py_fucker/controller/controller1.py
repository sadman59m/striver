import sys
# to import from one level up
sys.path.append('.')
from model import model1

def con1():
    return 'this is controller 1'


print(model1.mod1())
print(model1.my_main_var())