#include <iostream>
#include <string>

using namespace std;

class Calculator {
protected:
	char oper;
	string input;
	static float a, b;
	int num;

public:
	Calculator() {}

	virtual void cal() {}

	void numAndOper() {
		cout << "���ڸ� �Է����ּ��� : ";
		cin >> a;
		cout << "�����ڸ� �Է����ּ��� : ";
		cin >> oper;
		cout << "���ڸ� �Է����ּ��� : ";
		cin >> b;
	}

	void ask() {
		cout << "������ ��� �����Ͻðڽ��ϱ�? (Y: ���, AC: �ʱ�ȭ, EXIT: ����)";
		cin >> input;
	}

	void resume() {
		cout << "�����ڸ� �Է����ּ��� : ";
		cin >> oper;
		cout << "���ڸ� �Է����ּ��� : ";
		cin >> b;
	}

	void reset() {
		a = 0;
		b = 0;
	}

	float geta() {
		return a;
	}
	float getb() {
		return b;
	}
	char getOper() {
		return oper;
	}
	int getNum() {
		if (input == "Y" || input == "y") {
			num = 1;
		}
		else if (input == "AC" || input == "ac") {
			num = 2;
		}
		else if (input == "EXIT" || input == "exit") {
			num = 3;
		}
		else num = 0;
		return num;
	}

};

class Add :public Calculator {
public:
	void cal() {
		a = a + b;
		cout << "--------------------------------------" << endl <<
			"��� : " << a << endl <<
			"--------------------------------------" << endl;
	}
};

class Sub :public Calculator {
public:
	void cal() {
		a = a - b;
		cout << "--------------------------------------" << endl <<
			"��� : " << a << endl <<
			"--------------------------------------" << endl;
	}
};

class Mul :public Calculator {
public:
	void cal() {
		a = a * b;
		cout << "--------------------------------------" << endl <<
			"��� : " << a << endl <<
			"--------------------------------------" << endl;
	}
};

class Div :public Calculator {
public:
	void cal() {
		a = a / b;
		cout << "--------------------------------------" << endl <<
			"��� : " << a << endl <<
			"--------------------------------------" << endl;
	}
};

float Calculator::a = 0;
float Calculator::b = 0;

int main() {
	int flag = 0;
	Calculator c;
	c.numAndOper();

	Calculator* c1;
	Add add;
	Sub sub;
	Mul mul;
	Div div;

	while (flag==0) {
		switch (c.getOper()) {
		case '+':
			c1 = &add;
			c1->cal();
			break;
		case '-':
			c1 = &sub;
			c1->cal();
			break;
		case '*':
			c1 = &mul;
			c1->cal();
			break;
		case '/':
			c1 = &div;
			c1->cal();
			break;
		default:
			flag = 1;
			break;
		}
		if (flag == 1) {
			cout << "�߸��� �������Դϴ�.";
			break;
		}
		c.ask();
		switch (c.getNum()) {
		case 0:
			flag = 1;
			break;
		case 1:
			c.resume();
			break;
		case 2:
			c.reset();
			c.numAndOper();
			break;
		case 3:
			flag = 1;
			cout << "���⸦ �����մϴ�.";
			break;
		default:
			flag = 1;
			cout << "�߸��� �Է��Դϴ�.";
			break;
		}
	}
}