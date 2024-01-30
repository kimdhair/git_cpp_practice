import sys
input=sys.stdin.readline

a = int(input())
b = int(input())
b_1=int(b%10)
b_2=int((b%100)/10)
b_3=int((b%1000)/100)
print(a*b_1)
print(a*b_2)
print(a*b_3)
print(a*b)

# 알고리즘: dfs, bfs, 소팅, 재귀, 해시
# 자료구조: 힙, 트리