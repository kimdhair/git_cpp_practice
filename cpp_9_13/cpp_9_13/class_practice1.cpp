#include <iostream>

using namespace std;

class Shape {
protected:
	virtual void draw() = 0;
};

class Circle:public Shape {
public:
	void draw() {
		cout << "원" << endl;
	}
};

class Rect :public Shape {
public:
	void draw() {
		cout << "사각형" << endl;
	}
};

class Triangle :public Shape {
public:
	void draw() {
		cout << "삼각형" << endl;
	}
};

int main() {
	Circle c;
	Rect r;
	Triangle t;
	c.draw();
	r.draw();
	t.draw();
}