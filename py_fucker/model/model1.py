import sys
sys.path.append('.')

import main


def mod1():
    return 'this is model 1'

my_main_var = main.my_main

if __name__ == '__main__':
    print(main.my_main())
