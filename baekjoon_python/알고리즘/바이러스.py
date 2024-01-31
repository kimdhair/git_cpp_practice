import sys
from collections import deque
input = sys.stdin.readline

N = int(input())
M = int(input())
E = {}
for _ in range(M):
    key, val = map(int, input().split())

    if key not in E:
        val_list = []
        val_list.append(val)
        E[key] = val_list
    else:
        E[key].append(val)
        E[key].sort()

    if val not in E:
        val_list = []
        val_list.append(key)
        E[val] = val_list
    else:
        E[val].append(key)
        E[val].sort()

q = deque()
chk = [0] * (N+1)
cnt = 0

def bfs(s):
    global cnt
    chk[s] = 1

    while True:
        try:
            for i in E[s]:
                if chk[i] == 0:
                    chk[i] = 1
                    q.append(i)
                    cnt += 1
            if len(q) == 0:
                break
            s = q.popleft()
        except:
            break

bfs(1)
print(cnt)