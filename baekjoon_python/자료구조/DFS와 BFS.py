import sys
from collections import deque
input = sys.stdin.readline

N, M, V = map(int,input().split())
num_dict = {}
dfs_num = []
bfs_num = []
chk_dfs=[0]*(N+1)
chk_bfs=[0]*(N+1)

for _ in range(M):
    val_list=[]
    key, val = map(int,input().split())
    val_list.append(val)

    if key in num_dict:
        num_dict[key].append(val)
        num_dict[key].sort()
    else:
        num_dict[key] = val_list

    if val in num_dict:
        num_dict[val].append(key)
        num_dict[val].sort()
    else:
        val_list=[]
        val_list.append(key)
        num_dict[val] = val_list

def dfs(V):
    dfs_num.append(V)
    chk_dfs[V] = 1

    if sum(chk_dfs) == N:
        return None
    
    try:
        for i in num_dict[V]:
            if chk_dfs[i] == 0:
                dfs(i)
    except:
        None

def bfs(V):
    q = deque()

    while True:
        if sum(chk_bfs) == N:
            break
        if chk_bfs[V] == 0:
            bfs_num.append(V)
            chk_bfs[V] = 1
            try:
                for i in num_dict[V]:
                    q.append(i)
            except:
                None
        if not q:
            break
        V = q.popleft()
        
        
dfs(V)
bfs(V)
for i in dfs_num:
    print(i,end=' ')
print()
for i in bfs_num:
    print(i,end=' ')