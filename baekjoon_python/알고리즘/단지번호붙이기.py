from collections import deque

N = int(input())
arr = [[0 for _ in range(N)] for _ in range(N)]
chk = [[0 for _ in range(N)] for _ in range(N)]
for i in range(N):
    num_list = list(map(int,input()))
    for j in range(N):
        arr[i][j] = num_list[j]

# for i in range(N):
#     for j in range(N):
#         print(arr[i][j],end=' ')
#     print()

cnt = 0
q = deque()
y=0
x=0
my=[0,1,0,-1]
mx=[1,0,-1,0]
total = []

def bfs(y,x):
    global cnt
    flag = 0
    chk_sum = 0
    chk[y][x] = 1

    while True:
        if arr[y][x] == 1:
            cnt += 1
            arr[y][x] = cnt
            chk[y][x] = 1
            for i in range(4):
                gy = y + my[i]
                gx = x + mx[i]
                if N>gx>=0 and N>gy>=0 and chk[gy][gx] == 0:
                    #chk[gy][gx] = 1
                    if arr[gy][gx] == 1:
                        q.append([gy,gx])
                        #cnt += 1
                        #arr[gy][gx] = cnt

        if len(q) == 0:
            #arr[y][x] = cnt
            # if arr[y][x] == 1 and cnt == 0:
            #     total.append(1)
            if cnt != 0:
                total.append(cnt)
            break_flag = 0
            cnt = 0
            chk_sum = 0
            for i in range(N):
                for j in range(N):
                    chk_sum += chk[i][j]
                    if chk[i][j] == 0 and arr[i][j] == 0:
                        chk[i][j] = 1
                    elif chk[i][j] == 0 and arr[i][j] == 1:
                        q.append([i,j])
                        #print(i,j)
                        break_flag = 1
                        break
                    if chk_sum == N**2:
                        chk[N-1][N-1] = 1
                        flag = 1
                        #break_flag = 1
                        #print(chk_sum)
                        break
                if break_flag == 1:
                    break
            #print(chk_sum)

        if flag == 1:
            break
        try:
            y, x = q.popleft()
        except:
            break
bfs(y,x)


# for i in range(N):
#     for j in range(N):
#         print(arr[i][j],end=' ')
#     print()
# print()
# for i in range(N):
#     for j in range(N):
#         print(chk[i][j],end=' ')
#     print()

# total.sort()
# print(len(total))
# print('각각의 개수')

total.sort()
#print('토탈 길이')
print(len(total))

#print(total)
for i in total:
    print(i)