#include <iostream>

using namespace std;

class Shape {
protected:
	virtual void draw() = 0;
};

class Circle:public Shape {
public:
	void draw() {
		cout << "��" << endl;
	}
};

class Rect :public Shape {
public:
	void draw() {
		cout << "�簢��" << endl;
	}
};

class Triangle :public Shape {
public:
	void draw() {
		cout << "�ﰢ��" << endl;
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