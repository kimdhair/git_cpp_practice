#include <iostream>

using namespace std;

class Rectangle {
public:
	Rectangle(double width, double height) : m_width(width), m_height(height) {}
	double result() { return m_width * m_height; }

	Rectangle(const Rectangle& other) {
		m_width = other.m_width;
		m_height = other.m_height;
	}

	double getwidth() {
		return m_width;
	}

	double getheight() {
		return m_height;
	}

	void setwidth(double m_width)
	{
		this->m_width = m_width;
	}
	void setheight(double m_height)
	{
		this->m_height = m_height;
	}

private:
	double m_width;
	double m_height;

};

int main()
{
	double w;
	double h;
	cout << "가로, 세로 길이를 입력하세요. : ";
	cin >> w >> h;
	Rectangle r(w, h);
	Rectangle other_r(r);
	cout << "가로, 세로 길이를 입력하세요. : ";
	cin >> w >> h;
	r.setwidth(w);
	r.setheight(h);
	w=r.getwidth();
	h=r.getheight();

	cout << "넓이는 : " << w*h<<endl<<"가로 세로 길이는 : "<<r.getwidth()<<" "<<r.getheight();
	return 0;
}