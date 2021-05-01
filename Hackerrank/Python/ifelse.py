#!/bin/python

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(raw_input().strip())
if((n%2)!=0) :
        print("Weird")
elif ((n&2==0)&(6>n>1)) :
    print("Not Weird")
elif ((n%2==0)&(21>n>7)) :
    print("Weird")
else :
    print ("Not Weird")


