user=[]
for _ in range(3):
    user.append(input("이름과 비밀번호를 입력하시오"))

f=open("./23_11_10/mem.txt","w")
for i in range(len(user)):
    f.write(user[i])
    f.write("\n")
f.close()

f2=open("./23_11_10/mem.txt","r")
f2_list=f2.read().split()
for i in range(0,len(f2_list),2):
    print(f"아이디: {f2_list[i]}, 비밀번호: {f2_list[i+1]}")
f2.close()