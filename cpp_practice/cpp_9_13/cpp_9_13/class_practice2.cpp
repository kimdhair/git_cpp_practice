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
		cout << name << " �����Դϴ�~" << endl;
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
		cout <<"�� : " << flavor << endl;
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
		cout <<"��� : " << shape << endl;
	}
};

int main() {
	vector<Snack *> snackBasket;
	Candy candy1("���",200,"����","a");
	Candy candy2("����", 300, "�佺", "b");
	Chocolate choco1("��",500,"�޴�","c");
	Chocolate choco2("�׸�",1000,"����","d");
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