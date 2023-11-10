import random

# num=random.sample(range(1,46),6)
# print(num)

num_list=set()
while len(num_list)!=6:
    num_list.add(random.randint(1,45))
print(num_list)