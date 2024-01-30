import sys
input = sys.stdin.readline

N=int(input())
xi=[]
yi=[]
dic={}
for _ in range(N):
    a,b=list(map(int,input().split()))
    if a in dic:
        dic[a].append(b)
    else:
        dic[a]=b
print(dic)