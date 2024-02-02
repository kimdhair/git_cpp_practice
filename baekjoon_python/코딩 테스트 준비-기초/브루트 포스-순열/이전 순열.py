from itertools import permutations
import sys
input = sys.stdin.readline

N = int(input())
nums = list(map(int,input().split()))
cnt = 0
storage = []
for i in permutations(range(1,N+1)):
    if list(i) == nums and cnt == 0:
        print('-1')
        break
    elif list(i) == nums:
        for j in storage[-1]:
            print(j, end=' ')
        break
    storage.append(list(i))
    cnt += 1
    #print(i)