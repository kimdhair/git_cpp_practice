import sys
from itertools import permutations
input = sys.stdin.readline

N = int(input())
nums = list(map(int,input().split()))
sum = 0
total = []
a = 0
for i in permutations(nums):
    for j in range(N-1):
        sum += abs(i[j]-i[j+1])
    total.append(sum)
    sum = 0
print(max(total))