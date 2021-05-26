from decimal import getcontext
from math import sqrt

tc = input()
for i in range(int(tc)):
    num = input()
    t = input()
    getcontext().prec = int(t)
    print(sqrt(int(num)))

