import random as r

num=r.randint(1,10)
while 1:
    guess_num=int(input("숫자를 맞춰보세요: "))
    if guess_num==num:
        print(f"맞았어요! 랜덤 숫자는 {num} 입니다!")
        break
    else:
        print("땡!")