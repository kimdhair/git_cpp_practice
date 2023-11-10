'''
#calculate practice
class cal:
    def __init__(self,n1,n2):
        self.n1=n1
        self.n2=n2
    def add(self):
        return self.n1+self.n2
    def sub(self):
        return self.n1-self.n2
    def mul(self):
        return self.n1*self.n2
    def div(self):
        return self.n1/self.n2

a=cal(4,2)
print(a.add())
print(a.sub())
print(a.mul())
print(a.div())

#supermarket class
class Supermarket:
    count=0
    def __init__(self,location,name,product,customer):
        self.loc=location
        self.name=name
        self.pro=product
        self.cus=customer
        Supermarket.count+=1
    def print_location(self):
        print(self.loc)
    def change_category(self):
        Supermarket.product=self.pro
    def show_list(self):
        print(self.pro)
    def enter_customer(self):
        self.cus+=1
    def show_info(self):
        print(self.name,self.loc,self.pro,self.cus)
    def show_supermarket_count(self):
        print(Supermarket.count)

s1=Supermarket("인천","a","사탕",3)
s2=Supermarket("서울","b","초콜릿",2)

s1.print_location()
s1.change_category()
s1.show_list()
s1.enter_customer()
s1.show_info()
s1.show_supermarket_count()
'''

#클래스 상속
class Cal:
    def __init__(self):
        self.value=100

    def sub(self,value):
        self.value-=value

class MinLimitCalculator(Cal):
    def sub(self,value):
        self.value-=value
        if self.value<0:
            self.value=0

cal=MinLimitCalculator()
cal.sub(20)
cal.sub(90)
print(cal.value)