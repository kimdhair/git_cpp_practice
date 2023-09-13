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
		cout << "�����Դϴ�~" << endl;
	}
};

int Snack::count = 0;

class Candy : public Snack {
	string flavor;
public:
	Candy(string flavor) {
		this->price = 200;
		this->name = "����";
		this->maker = "���";
		this->flavor = flavor;
	}
	void show_info() {
		cout << flavor << "�� ����" << endl;
	}
};

class Chocolate : public Snack {
	string shape;
public:
	Chocolate(string shape) {
		this->price = 1000;
		this->name = "���ݸ�";
		this->maker = "�Ե�";
		this->shape = shape;
	}

	void show_info() {
		cout << shape << "��� ���ݸ�" << endl;
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
		cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�.(1: ����, 2: ���ݸ�, 0: ����) : ";
		cin >>num;
		switch(num){
		case 0:
			flag = 1;
			break;
		case 1:
			cout << "���� �Է��ϼ��� : ";
			cin >> fla;
			flavor.push_back(&c);
			break;
		case 2:
			cout << "����� �Է��ϼ��� : ";
			cin >> sha;
			shape.push_back(&choco);
			break;
		default:
			cout << "0-2 ������ ���ڸ� �Է��ϼ���." << endl;
			break;
		}
	}

}