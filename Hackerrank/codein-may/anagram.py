from collections import Counter

def check(a,b):
    if(Counter(a)==Counter(b)):
        print("YES")
    else:
        print("NO")

a = input("")
b = input("")
check(a,b)