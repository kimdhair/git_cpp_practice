import random as r

num=[]
for i in range(4):
    num.append(r.randint(1,100))
num.sort()
print(num)