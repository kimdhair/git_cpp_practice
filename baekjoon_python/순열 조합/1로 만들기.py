import sys
input = sys.stdin.readline

N = int(input())
# x%3 == 0 , x/3
# x%2 == 0 , x/2
# x -= 1
# 5 -> 4 -> 2 -> 1
# 7 -> 6 -> 2 -> 1 3회
# 10 -> 9 -> 3 -> 1 3회
# 11 -> 10 4회
# 12 -> 4 -> 2 -> 1 3회
# 14 -> 7 -> 6 -> 2 -> 1 4회
# 13 -> 12 -> 4 -> 2 -> 1
# 14 -> 7 -> 6 -> 2 -> 1
# 100 -> 99 -> 33 -> 11 -> 10 -> 5 -> 4 -> 2 -> 1
# 100 -> 50 -> 25 -> 24 -> 8 -> 4 -> 2 ->1
# x%3 == 0 무조건 3으로 나누고
# x%3 != 0 and x%2 == 0 무조건 2로 나누고
# x%3 != 0 and x%2 != 0: x -= 1
# cnt = 0
# while True:
#     if N%3 == 0:
#         N = N/3
#         cnt += 1
#     elif N%3 != 0 and N%2 == 0 and (N-1)%3 != 0:
#         N = N/2
#         cnt += 1
#     elif N == 1:
#         print(cnt)
#         break
#     else:
#         N -= 1
#         cnt += 1

data = [0]*(N+1)
for i in range(2,N+1):
    data[i] = data[i-1] + 1

    if i%2 == 0:
        data[i] = min(data[i],data[i//2]+1)
    if i%3 == 0:
        data[i] = min(data[i],data[i//3]+1)
print(data[N])