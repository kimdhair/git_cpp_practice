from collections import deque
import sys
input = sys.stdin.readline

N = int(input())
q = deque()
for _ in range(N):
    do = input()
    if 'push_front' in do:
        _, num = do.split()
        q.appendleft(num)
    elif 'push_back' in do:
        _, num = do.split()
        q.append(num)
    elif 'pop_front' in do:
        if len(q) == 0:
            print('-1')
        else:
            print(q.popleft())
    elif 'pop_back' in do:
        if len(q) == 0:
            print('-1')
        else:
            print(q.pop())
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