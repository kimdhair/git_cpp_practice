from collections import deque
import sys
input = sys.stdin.readline

N, M = map(int,input().split())
dic = {}
for _ in range(M):
    key, val = map(int,input().split())
    if key not in dic:
        val_list=[]
        val_list.append(val)
        dic[key] = val_list

    else:
        dic[key].append(val)
        dic[key].sort()

    if val not in dic:
        key_list=[]
        key_list.append(key)
        dic[val] = key_list

    else:
        dic[val].append(key)
        dic[val].sort()


s = 0
cnt_max = []
flag =0
def dfs(s, cnt):
    global flag
    if flag:
        return None
    cnt += 1
    chk[s] = 1
    if cnt >= 5:
        flag = 1
        return None
    for i in dic[s]:
        if chk[i] == 0:
            dfs(i, cnt)
    chk[s] = 0
for i in dic:
    chk = [0] * N
    dfs(i, 0)

print(flag)