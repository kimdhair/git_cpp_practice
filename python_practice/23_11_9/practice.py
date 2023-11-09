'''
#실습 1
#result=0
num=int(input("어디까지 계산할까요? "))
# for i in range(1,num+1,2):
#     result+=i
# print(result)

num_list=list(range(1,num+1))
num_sum=sum(num_list)
print(num_list)

#실습 2
sec=int(input("몇초?: "))
for i in range(sec,0,-1):
    print(i,end=" ")
print("발사!")

#실습 3
num=int(input("몇 단을 출력할까요? "))
for i in range(1,10):
    print(f"{num} * {i} = {num*i}")

#실습 4
#1번
num=int(input("몇 줄? "))
for i in range(1,num+1):
    print("*"*i)

#2번
num=int(input("몇 줄? "))
for i in range(1,num+1):
    print(" "*(num-i),"*"*i)

#3번
num=int(input("몇 줄? "))
for i in range(1,num*2+1,2):
    print(" "*(num-(i+1)//2),"*"*i)
'''

#4번
sum=0
num=input("숫자 여러 개 입력 > ")
num_list=list(num.split(" "))
int_num_list=[]
for i in range(len(num_list)):
    int_num_list.append(int(num_list[i]))
print(f"가장 큰 값: {max(int_num_list)}")
print(f"가장 작은 값: {min(int_num_list)}")
int_num_list.remove(max(int_num_list))
int_num_list.remove(min(int_num_list))
for i in range(len(int_num_list)):
    sum+=int_num_list[i]
print(f"나머지 값의 평균: {sum/len(int_num_list)}")