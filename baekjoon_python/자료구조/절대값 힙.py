import heapq
import sys
input = sys.stdin.readline

N = int(input())
n_heap = []
p_heap = []
for _ in range(N):
    x = int(input())
    if x == 0:
        if len(n_heap) + len(p_heap) == 0:
            print('0')
        else:
            if len(n_heap) > 0 and len(p_heap) > 0:
                if n_heap[0] == p_heap[0]:
                    print(-1*heapq.heappop(n_heap))
                elif n_heap[0] > p_heap[0]:
                    print(heapq.heappop(p_heap))
                elif n_heap[0] < p_heap[0]:
                    print(-1*heapq.heappop(n_heap))
            elif len(n_heap) > 0 and len(p_heap) == 0:
                print(-1*heapq.heappop(n_heap))
            elif len(n_heap) == 0 and len(p_heap) > 0:
                print(heapq.heappop(p_heap))
    elif x < 0:
        heapq.heappush(n_heap, -1*x)
    elif x > 0:    
        heapq.heappush(p_heap, x)