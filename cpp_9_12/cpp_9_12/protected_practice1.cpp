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
		cout << "변의 개수: " << line_num << endl << "밑변의 길이: " << down_line << endl;
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
		cout << "사각형의 넓이는 " << area() << endl;
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
		cout << "삼각형의 넓이는 " << area() << endl;
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

	cout << "밑변과 높이를 입력해 주세요. ";
	cin >> down_line>>height;
	/*down_line=t.getdown_line();
	height = t.getheight();*/
	t.setheight(height, down_line);
	t.printInfo(t.getdown_line(),t.getheight());
	//cout << "삼각형 넓이: " << t.area() << endl;

	cout << "밑변과 세로 길이를 입력해 주세요. ";
	cin >> down_line>>l_line;
	/*down_line=r.getdown_line();
	l_line = r.getl_line();*/
	r.setl_line(l_line, down_line);
	r.printInfo(r.getdown_line(), r.getl_line());
	//cout << "사각형 넓이: " << r.area() << endl;
	//오버라이딩은 인터페이스를 통일하기 위해 쓴다
	//오버로딩은 파라미터를 신경쓰지 않기 위해 쓴다.
}