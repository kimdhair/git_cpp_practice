import sys
import heapq
input = sys.stdin.readline

N = int(input())
max_heap = []
min_heap = []
for i in range(N):
    x = int(input())
    if i % 2 == 0:
        heapq.heappush(max_heap, -x)
    else:
        heapq.heappush(min_heap, x)

    if max_heap and min_heap and -max_heap[0] > min_heap[0]:
        maxnum = -heapq.heappop(max_heap)
        minnum = heapq.heappop(min_heap)

        heapq.heappush(max_heap, -minnum) 
        heapq.heappush(min_heap, maxnum)

    print(-max_heap[0])

# for _ in range(N):
#     x = int(input())
#     heapq.heappush(heap, x)
#     heap_copy = heap.copy()
#     if len(heap)%2 != 0:
#         for _ in range(int(len(heap)/2)):
#             heapq.heappop(heap_copy)
#         print(heap_copy[0])
#     elif len(heap)%2 == 0:
#         for _ in range(int(len(heap)/2)-1):
#             heapq.heappop(heap_copy)
#         if heap_copy[0] > heap_copy[1]:
#             print(heap_copy[1])
#         elif heap_copy[0] < heap_copy[1]:
#             print(heap_copy[0])

# for i in range(1,N+1):
#     x = int(input())
#     heapq.heappush(heap, x)
#     if i%2 != 0:
#         print(heapq.nsmallest(int(i/2)+1, heap)[-1])
#     else:
#         print(heapq.nsmallest(int(i/2), heap)[-1])