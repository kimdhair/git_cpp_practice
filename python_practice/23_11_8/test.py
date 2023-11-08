'''
#실습 1
print('|\_/|')
print('|q p|   /}')
print('( . )"""\\')
print('|"^"`    |')
print('||_/=\\\__|')
a="LoveDive"
print(a[::4])
b=11.2
b_1=int(b)
print(b_1)
print(type(b_1))

#실습 2
name=input("이름을 입력하세요. ")
age=input("나이를 입력하세요. ")
print(f"안녕하세요! {name}님 ({age}세)")

name_1=input("이름을 입력하세요. ")
birth=int(input("태어난 년도를 입력하세요. "))
year=int(input("올해 년도를 입력하세요. "))
print(f"올해는 {year}년, {name_1}님의 나이는 {year-birth+1}세 입니다.")

#실습 3
num1=int(input("1번 숫자를 입력하세요: "))
num2=int(input("2번 숫자를 입력하세요: "))
print(num1*(num2%10))
print(num1*(int(num2/10)%10))
print(num1*(int(num2/100)%10))
print(num1*num2)

#실습 4
rainbow=['red', 'orange', 'yellow', 'green', 'blue', 'indigo', 'purple']
print(rainbow[2])
print(sorted(rainbow))
rainbow.append('skyblue')
print(rainbow)
del rainbow[3:7]
print(rainbow)

#실습 5
num=int(input())
if num%2==0:
  print("짝수")
else:
  print("홀수")

#실습 6
score=int(input("점수를 입력하시오: "))
if score<0:
  print("잘못된 점수입니다.")
elif score<60:
  print("E")
elif score<70:
  print("D")
elif score<80:
  print("C")
elif score<90:
  print("B")
elif score<=100:
  print("A")
else:
  print("잘못된 점수입니다")
'''

#실습 7
age=int(input("나이를 숫자로 입력해 주세요: "))
pay=input("결제 방법을 입력해주세요. ('카드' 또는 '현금'만 입력): ")
money="무료"
if pay=="카드":
  if age<8:
    money="무료"
  elif age<14:
    money="450원"
  elif age<20:
    money="720원"
  elif age<75:
    money="1200원"
else:
  if age<8:
    money="무료"
  elif age<14:
    money="450원"
  elif age<20:
    money="1000원"
  elif age<75:
    money="1300원"
print(f"{age}세의 {pay} 요금은 {money} 입니다.")