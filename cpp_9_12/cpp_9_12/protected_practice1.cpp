#include <iostream>

using namespace std;

class Shape {
protected:
	double line_num = 0;
	double down_line = 0;
public:
	//Shape(double line_num, double down_line) :line_num(line_num), down_line(down_line) {}
	Shape() {}
	void printInfo() {
		cout << "���� ����: " << line_num << endl << "�غ��� ����: " << down_line << endl;
	}
	/*void setline_num(double line_num) {
		this->line_num = line_num;
	}
	void setdown_line(double down_line) {
		this->down_line = down_line;
	}*/
	double getdown_line() {
		return down_line;
	}
	double getline_num() {
		return line_num;
	}

};

class Rectangle :public Shape {
protected:
	double l_line = 0;
public:
	Rectangle(double l_line, double line_num, double down_line) :l_line(l_line) {
		this->line_num = line_num;
		this->down_line = down_line;
	}
	double area() {
		return down_line * l_line;
	}
	void setl_line(double l_line, double down_line) {
		this->l_line = l_line;
		this->down_line = down_line;
	}
	void printInfo(double down_line,double l_line) {
		cout << "�簢���� ���̴� " << area() << endl;
	}
	double getl_line() {
		return l_line;
	}
};

class Triangle :public Shape {
protected:
	double height = 0;
public:
	Triangle(double height, double line_num, double down_line) :height(height) {
		this->line_num = line_num;
		this->down_line = down_line;
	}
	double area() {
		return (down_line * height) / 2;
	}
	void setheight(double height, double down_line) {
		this->height = height;
		this->down_line = down_line;
	}
	void printInfo(double down_line,double height) {
		cout << "�ﰢ���� ���̴� " << area() << endl;
	}
	double getheight() {
		return height;
	}
};

int main()
{
	double line_num = 0;
	double down_line = 0;
	double height = 0;
	double l_line = 0;
	Rectangle r(4, 4, 5);
	Triangle t(4, 3, 5);
	//Shape s;
	//line_num = s.getline_num();
	//s.printInfo();
	//cin >> line_num >> down_line;

	cout << "�غ��� ���̸� �Է��� �ּ���. ";
	cin >> down_line>>height;
	/*down_line=t.getdown_line();
	height = t.getheight();*/
	t.setheight(height, down_line);
	t.printInfo(t.getdown_line(),t.getheight());
	//cout << "�ﰢ�� ����: " << t.area() << endl;

	cout << "�غ��� ���� ���̸� �Է��� �ּ���. ";
	cin >> down_line>>l_line;
	/*down_line=r.getdown_line();
	l_line = r.getl_line();*/
	r.setl_line(l_line, down_line);
	r.printInfo(r.getdown_line(), r.getl_line());
	//cout << "�簢�� ����: " << r.area() << endl;
	//�������̵��� �������̽��� �����ϱ� ���� ����
	//�����ε��� �Ķ���͸� �Ű澲�� �ʱ� ���� ����.
}