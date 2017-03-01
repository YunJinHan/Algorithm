#!/bin/python

import sys


N = int(raw_input().strip())
list = []
for a0 in xrange(N):
    firstName,emailID = raw_input().strip().split(' ')
    firstName,emailID = [str(firstName),str(emailID)]
    if "@gmail.com" in emailID:
    	list.append(firstName)
list.sort(reverse=False)
for i in list:
    print i