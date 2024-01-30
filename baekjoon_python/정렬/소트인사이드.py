import sys
input=sys.stdin.readline
num=[]
N=input()
for i in N:
    num.append(i)
num.sort(reverse=True)
for i in num:
    print(i,end='')