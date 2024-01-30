import sys
input = sys.stdin.readline

N = int(input())
stack=[]
for _ in range(N):
    do = list(map(int,input().split()))
    if do[0] == 1:
        stack.append(do[1])
    elif do[0] == 2:
        if len(stack)>0:
            print(stack[-1])
            stack.pop()
        else:
            print('-1')
    elif do[0] == 3:
        print(len(stack))
    elif do[0] == 4:
        if len(stack) == 0:
            print('1')
        else:
            print('0')
    elif do[0] == 5:
        if len(stack)>0:
            print(stack[-1])
        else:
            print('-1')