import sys
input = sys.stdin.readline
S=set()
sum=0
N, M = map(int, input().split())
for i in range(N):
    S.add(input())
for i in range(M):
    s1=input()
    if s1 in S:
        sum+=1
print(sum)