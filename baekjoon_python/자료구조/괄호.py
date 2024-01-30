import sys
input = sys.stdin.readline

vps=[]
T = int(input())
for _ in range(T):
    cnt = 0
    inp = list(input())
    inp.pop()
    for i in inp:
        if i == '(':
            cnt += 1
        elif i == ')':
            cnt -= 1
            if cnt < 0:
                break
    if cnt == 0:
        print('YES')
    else:
        print('NO')
