#과제 1
num=int(input("숫자 입력: "))
i=0
num_list=[]
while i!=num:
    i=i+1
    num_list.append(i)
print(num_list)
print(num_list[::2])
print(num_list[1::2])

num_list=[]
for i in range(1,num+1):
    num_list.append(i)
print(num_list)
print(num_list[::2])
print(num_list[1::2])

num_list=[]
num_list=list(range(1,num+1))
print(num_list)