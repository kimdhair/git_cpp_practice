import sys
from itertools import permutations
from itertools import combinations
input = sys.stdin.readline

# a*1 + b*2 + c*3 = 4
# t가 1이면 개수 1
# t가 2이면 개수 2
# t가 3이면 개수 4

T = int(input())
for _ in range(T):
    data = [1,2,4]
    n = int(input())
    if n > 3:
        for i in range(3,n):
            data.append(data[i-3] + data[i-2] + data[i-1])
        print(data[n-1])
    else:
        print(data[n-1])