from itertools import permutations
import sys
input = sys.stdin.readline

N = int(input())
for i in permutations(range(1,N+1)):
    for j in range(len(i)):
        print(i[j], end=' ')
    print()