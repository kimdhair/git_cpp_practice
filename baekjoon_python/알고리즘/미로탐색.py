import sys
from collections import deque
#input = sys.stdin.readable

N, M = map(int,input().split())
arr = [[0 for _ in range(M)] for _ in range(N)]
chk = [[0 for _ in range(M)] for _ in range(N)]
for i in range(N):
    num_list = list(map(int,input()))
    for j in range(M):
        arr[i][j] = num_list[j]

# for i in range(N):
#     for j in range(M):
#         print(arr[i][j],end=' ')
#     print()

# for i in range(N):
#     for j in range(M):
#         print(chk[i][j],end=' ')
#     print()

#행렬은 y가 먼저
mx = [1,0,-1,0]
my = [0,1,0,-1]

sx = 0
sy = 0
cnt = 0

def bfs(sy,sx):
    global cnt
    q = deque()
    chk[sy][sx] = 1

    while True:
        if sy == N-1 and sx == M-1:
            break
        if arr[sy][sx] != 0:
            for i in range(4):
                gx=sx+mx[i]
                gy=sy+my[i]
                if M>gx>=0 and N>gy>=0 and chk[gy][gx] == 0:
                    chk[gy][gx] = 1
                    if arr[gy][gx] == 1:
                        q.append([gy,gx])
                        #cnt += 1
                        arr[gy][gx] = arr[sy][sx] + 1
            
            #cnt += 1
            
            #arr[sy][sx] = cnt
        
        try:
            sy, sx = q.popleft()
        except:
            None
        
            

bfs(sy,sx)
print(arr[N-1][M-1])