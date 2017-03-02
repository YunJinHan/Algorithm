#!/bin/python

import sys


t = int(raw_input().strip())
for a0 in xrange(t):
    n,k = raw_input().strip().split(' ')
    n,k = [int(n),int(k)]
    ans = (k - 1 if ( (k - 1) | k) <= n else k - 2)
    print ans