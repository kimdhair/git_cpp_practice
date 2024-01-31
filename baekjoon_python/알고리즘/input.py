arr = [[0,1,1],[0,1,1],[1,1,1]]
sum = 0
for i in range(3):
    for j in range(3):
        sum += arr[i][j]
print(sum)