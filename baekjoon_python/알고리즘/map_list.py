import sys
from collections import deque
#input = sys.stdin.readline
#num_list=list(map(str,input()))
#print(num_list)
q=deque()
arr = [[0 for _ in range(2)] for _ in range(2)]
for i in range(2):
    for j in range(2):
        print(arr[i][j],end=' ')
    print()

arr[1][0] = 2
print(arr[0][0])
q.append(arr[0][0])
#q.append(arr[1][0])

print(q)
# print(q.popleft()[0][1])
# print(q.popleft()[1])

