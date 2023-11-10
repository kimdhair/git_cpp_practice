vending_machine=['게토레이', '게토레이', '레쓰비', '레쓰비', '생수', '생수', '생수', '이프로']
# print(f"남은음료수: {vending_machine}")
# while 1:
#     print("========================= RESTART")
#     user=input("소비자 or 주인? ")
#     if user=="소비자":
#         drink=input("마시고 싶은 음료? ")
#         if drink in vending_machine:
#             print(f"{drink} 드릴게요")
#             vending_machine.remove(drink)
#             print(f"남은음료수: {vending_machine}")
#         else:
#             print(f"{drink}는 지금 없네요")
#     elif user=="주인":
#         want=input("추가 or 삭제? ")
#         if want=="추가":
#             drink=input("추가할 음료수: ")
#             vending_machine.append(drink)
#             vending_machine.sort()
#             print(f"남은음료수: {vending_machine}")
#         elif want=="삭제":
#             drink=input("삭제할 음료수: ")
#             if drink in vending_machine:
#                 vending_machine.remove(drink)
#                 print(f"남은음료수: {vending_machine}")
#             else:
#                 print(f"{drink}는 지금 없네요")

def check_machine():
    print(f"남은음료수: {vending_machine}")

def is_drink():
    drink=input("마시고 싶은 음료? ")
    if drink in vending_machine:
        print(f"{drink} 드릴게요")
        vending_machine.remove(drink)
        check_machine()
    else:
        print(f"{drink}는 지금 없네요")

def add_drink():
    drink=input("추가할 음료수: ")
    vending_machine.append(drink)
    vending_machine.sort()
    check_machine()

def remove_drink():
    drink=input("삭제할 음료수: ")
    if drink in vending_machine:
        vending_machine.remove(drink)
        check_machine()
    else:
        print(f"{drink}는 지금 없네요")
        check_machine()

check_machine()
is_drink()
add_drink()
remove_drink()