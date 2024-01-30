import sys
input = sys.stdin.readline

stack=[]
K = int(input())
for _ in range(K):
    num = int(input())
    if num == 0:
        stack.pop()
    else:
        stack.append(num)
print(sum(stack))