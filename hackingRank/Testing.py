#!/bin/python3
import sys
from random import randint

def solution(k, a):
    c = 0
    for x in a:
        if x <= 0: c += 1
    if c < k:
        return 1
    else:
        return 0


matrix = [1, 0, 1, 0, 1]
ns = []
print(len(matrix))
for need_sol in matrix:
    while True:
        n = randint(3, 20)
        if n not in ns:
            ns.append(n)
            break
    while True:
        k = randint(1, n)
        a = [-10, 0, 10]
        for x in range(n - 3):
            a.append(randint(-1000, 1000))

        if need_sol == solution(k,a):
            print(n, k)
            print(" ".join(str(x) for x in a))
            break