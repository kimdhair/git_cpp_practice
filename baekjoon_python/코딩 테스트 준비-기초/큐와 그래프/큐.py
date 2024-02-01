import sys
from collections import deque
input = sys.stdin.readline

N = int(input())
q = deque()
for _ in range(N):
    do = input()
    if 'push' in do:
        _, num = do.split()
        q.append(int(num))
    elif 'pop' in do:
        if len(q) == 0:
            print('-1')
        else:
            print(q.popleft())
    elif 'size' in do:
        print(len(q))
    elif 'empty' in do:
        if len(q) == 0:
            print('1')
        else:
            print('0')
    elif 'front' in do:
        if len(q) == 0:
            print('-1')
        else:
            print(q[0])
    elif 'back' in do:
        if len(q) == 0:
            print('-1')
        else:
            print(q[-1])