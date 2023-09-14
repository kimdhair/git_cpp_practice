//#include <iostream>
//#include <vector>
//#include "class_snack.h"
//#include "class_candy.h"
//#include "class_chocolate.h"
//#include "class_util.h"
#include "class_main.h"

int main();
//using namespace std;

//class Snack {
//protected:
//	int price;
//	string name;
//	string maker;
//	static int count;
//public:
//	Snack() {
//		count++;
//	}
//	virtual ~Snack() { count--; }
//	static int get_count() {
//		return count;
//	}
//	string get_name() {
//		return name;
//	}
//	virtual void show_info() {
//		cout << "과자입니다~" << endl;
//	}
//};


//class Candy : public Snack {
//	string flavor;
//public:
//	Candy(string flavor) {
//		this->price = 200;
//		this->name = "사탕";
//		this->maker = "농심";
//		this->flavor = flavor;
//	}
//	void show_info() {
//		cout << flavor << "맛 사탕" << endl;
//	}
//};

//class Chocolate : public Snack {
//	string shape;
//public:
//	Chocolate(string shape) {
//		this->price = 1000;
//		this->name = "초콜릿";
//		this->maker = "롯데";
//		this->shape = shape;
//	}
//
//	void show_info() {
//		cout << shape << "모양 초콜릿" << endl;
//	}
//};

//class Util {
//public:
//	static int add(int a, int b) { return a + b; }
//};

//int Snack::count = 0;
//
//int main() {
//	int num;
//	int flag = 0;
//	string fla;
//	string sha;
//	vector <Snack*> flavor;
//	vector <Snack*> shape;
//	int cnt = 0;
//	int cnt_candy = 0;
//	int cnt_chocolate = 0;
//
//	while (flag == 0) {
//		cout << "과자 바구니에 추가할 간식을 고르시오.(1: 사탕, 2: 초콜릿, 0: 종료) : ";
//		cin >> num;
//		switch (num) {
//		case 0:
//		{
//			flag = 1;
//			break;
//		}
//		case 1: {
//			cnt = 0;
//			cout << "맛을 입력하세요 : ";
//			cin >> fla;
//			Snack* s = new Candy(fla);
//			flavor.push_back(s);
//			++cnt;
//			++cnt_candy;
//			break;
//		}
//
//		case 2: {
//			cnt = 0;
//			cout << "모양을 입력하세요 : ";
//			cin >> sha;
//			Snack* s = new Chocolate(sha);
//			shape.push_back(s);
//			--cnt;
//			++cnt_chocolate;
//			break;
//		}
//
//		default:
//			cout << "0-2 사이의 숫자를 입력하세요." << endl;
//			break;
//		}
//	}
//	if (cnt > 0)
//	{
//		cout << "마지막 간식은: candy" << endl;
//	}
//	else if (cnt < 0)
//	{
//		cout << "마지막 간식은: chocolate" << endl;
//	}
//
//	cout << "과자 바구니에 담긴 간식의 개수는 " << Snack::get_count() << "개 입니다." << endl;
//	cout << "과자 바구니에 담긴 간식 확인하기!" << endl;
//
//	for (int i = 0; i < cnt_candy; i++)
//	{
//		((Candy*)flavor[i])->show_info();
//	}
//	for (int i = 0; i < cnt_chocolate; i++)
//	{
//		((Chocolate*)shape[0])->show_info();
//	}
//	for (Snack *snack:flavor)
//	{
//	delete snack;
//	}
//	for (Snack *snack:shape)
//	{
//	delete snack;
//	}
//	cout << Util::add(1, 2);
//
//	return 0;
//}