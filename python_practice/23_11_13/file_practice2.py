name=input("이름을 입력하세요. ")
pw=input("비밀번호를 입력하세요. ")
f=open("./23_11_10/mem.txt","r")
f_list=f.read().split()
flag=0
for i in range(0,len(f_list),2):
    if f_list[i]==name:
        if(f_list[i+1]==pw):
            print("로그인 성공")
            flag=1
            phone=input("전화번호를 입력하세요. ")
            break
if flag==0:
    print("로그인 실패")
f.close()

if flag==1:
    f1=open("./23_11_10/member_tel.txt","r")
    f1_list=f1.read().split()
    f1.close()
    for i in range(0,len(f1_list),3):
        if f1_list[i]==name:
            f1_list[i+2]=phone
    f2=open("./23_11_10/member_tel.txt","w")
    for i in range(0,len(f1_list),3):
        f2.write(f"{f1_list[i]} {f1_list[i+1]} {f1_list[i+2]}\n")
    f2.close()