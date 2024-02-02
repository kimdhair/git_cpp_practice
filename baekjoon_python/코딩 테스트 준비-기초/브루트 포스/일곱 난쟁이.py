import sys
input = sys.stdin.readline
num = []
flag = 0
for _ in range(9):
    num.append(int(input()))
# for i in range(9):
#     for j in range(9):
#         total = 0
#         if i != j:
#             total = sum(num) - num[i] - num[j]
#             if total == 100:
#                 if i > j:
#                     num.pop(i)
#                     num.pop(j)
#                 elif i < j:
#                     num.pop(j)
#                     num.pop(i)
#                 num.sort()
#                 for k in range(7):
#                     print(num[k])
#                 flag = 1
#                 break
#     if flag == 1:
#         break

from itertools import combinations as com

for i in com(num, 7):
    if sum(i)==100:
        i=list(i)
        i.sort()
        for j in range(len(i)):
            print(i[j])
        break