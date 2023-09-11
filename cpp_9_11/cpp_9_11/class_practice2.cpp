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

private:
	double m_width{};
	double m_height{};

};

int main()
{
	double w;
	double h;
	cout << "가로, 세로 길이를 입력하세요. : ";
	cin >> w >> h;
	Rectangle r(w, h);
	Rectangle other_r(r);

	cout << "넓이는 : " << other_r.result();

	return 0;
}