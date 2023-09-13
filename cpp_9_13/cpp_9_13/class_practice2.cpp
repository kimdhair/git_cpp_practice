#include <iostream>
#include <vector>

using namespace std;

class Snack {
protected:
	int price;
	string name;
	string maker;
public:
	Snack(){}
	string getname() {
		return name;
	}
	int getprice() {
		return price;
	}
	virtual void showInfo() {
		cout << name << " 과자입니다~" << endl;
	}
};

class Candy:public Snack{
public:
	string flavor;
	Candy(string flavor, int price, string name, string maker) :flavor(flavor) {
		this->price = price;
		this->name = name;
		this->maker = maker;
	}
	void showInfo() {
		cout <<"맛 : " << flavor << endl;
	}
};

class Chocolate: public Snack {
public:
	string shape;
	Chocolate(string shape, int price, string name, string maker) :shape(shape) {
		this->price = price;
		this->name = name;
		this->maker = maker;
	}
	void showInfo() {
		cout <<"모양 : " << shape << endl;
	}
};

int main() {
	vector<Snack *> snackBasket;
	Candy candy1("사과",200,"츄파","a");
	Candy candy2("포도", 300, "춥스", "b");
	Chocolate choco1("원",500,"달다","c");
	Chocolate choco2("네모",1000,"구리","d");
	snackBasket.push_back(&candy1);
	snackBasket.push_back(&candy2);
	snackBasket.push_back(&choco1);
	snackBasket.push_back(&choco2);
	for (Snack *snack:snackBasket) {
		cout << snack->getname() << endl;
		snack->showInfo();
	}

	//((Candy*)snackBasket[0])->showInfo();
	cout << ((Candy*)snackBasket[0])->flavor << endl;
	cout << ((Candy*)snackBasket[1])->flavor << endl;
	cout << ((Chocolate*)snackBasket[2])->shape << endl;
	cout << ((Chocolate*)snackBasket[3])->shape << endl;
	//((Chocolate*)snackBasket[2])->showInfo();


	/*for (Snack* snack : snackBasket) {
		Chocolate* pch = dynamic_cast<Chocolate*>(snack);
		if (pch) {
			cout << pch->shape << endl;
		}
		else {
			Candy* pc = dynamic_cast<Candy*>(snack);
			if (pc) {
				cout << pc->flavor << endl;
			}

		}
	}*/
}