from functools import reduce

a = [111, 2222, 45, 87, 44]

def greater(a, b):
    if (a>b):
        return a
    return b

print(reduce(greater, a))