import heapq
import sys
input = sys.stdin.readline

n = int(input())
heap = []
for i in range(n):
    heapq.heappush(heap, -1*(n-i))

for i in range(n):
    print(-1*heapq.heappop(heap),end=' ')