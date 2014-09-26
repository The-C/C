#!/bin/python

import functools;
print(functools.reduce((lambda x,y:x*y), range(1, 100001)))
