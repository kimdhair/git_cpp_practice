import sys
input = sys.stdin.readline

a, b, c = map(int,input().split())
y=1
while True:
    if a==15:
        a=0
    if b==28:
        b=0
    if c==19:
        c=0
    if y%15==a and y%28==b and y%19==c:
        print(y)
        break
    y += 1

# E= y%15=1, s= y%28=16, m= y%19=16