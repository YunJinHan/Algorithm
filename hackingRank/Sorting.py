#!/bin/python3

import sys

n = int(input().strip())
a = [int(a_temp) for a_temp in input().strip().split(' ')]

total_swaps = 0

def swap(p,q):
	_prev = a[p]
	_next = a[q]
	a[p] = _next
	a[q] = _prev

for i in range(len(a)):
	num_swaps = 0

	for j in range(len(a)-1):
		if a[j] > a[j + 1]:
			swap(j,j+1)
			num_swaps += 1
			total_swaps += 1
    if num_swaps == 0:
    pass
        
print("Array is sorted in {} swaps.".format(total_swaps))
print("First Element: {}".format(a[0]))
print("Last Element: {}".format(a[-1]))