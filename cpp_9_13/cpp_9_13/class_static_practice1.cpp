#include <iostream>
#include <vector>

using namespace std;

class Snack {
protected:
	int price;
	string name;
	string maker;
	static int count;
public:
	Snack() { count++; }
	virtual ~Snack() { count--; }
	static int get_count() {
		return count;
	}
	string get_name() {
		return name;
	}
	virtual void show_info() {
		cout << "과자입니다~" << endl;
	}
};

int Snack::count = 0;

class Candy : public Snack {
	string flavor;
public:
	Candy(string flavor) {
		this->price = 200;
		this->name = "사탕";
		this->maker = "농심";
		this->flavor = flavor;
	}
	void show_info() {
		cout << flavor << "맛 사탕" << endl;
	}
};

class Chocolate : public Snack {
	string shape;
public:
	Chocolate(string shape) {
		this->price = 1000;
		this->name = "초콜릿";
		this->maker = "롯데";
		this->shape = shape;
	}

	void show_info() {
		cout << shape << "모양 초콜릿" << endl;
	}
};

int main() {
	int num;
	int flag = 0;
	string fla;
	string sha;
	vector <Snack*> flavor;
	vector <Snack*> shape;
	Candy c(fla);
	Chocolate choco(sha);

	while (flag==0) {
		cout << "과자 바구니에 추가할 간식을 고르시오.(1: 사탕, 2: 초콜릿, 0: 종료) : ";
		cin >>num;
		switch(num){
		case 0:
			flag = 1;
			break;
		case 1:
			cout << "맛을 입력하세요 : ";
			cin >> fla;
			flavor.push_back(&c);
			break;
		case 2:
			cout << "모양을 입력하세요 : ";
			cin >> sha;
			shape.push_back(&choco);
			break;
		default:
			cout << "0-2 사이의 숫자를 입력하세요." << endl;
			break;
		}
	}

}