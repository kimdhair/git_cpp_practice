#include <iostream>

using namespace std;

class Rectangle {
public:
	Rectangle(double width, double height) : m_width(width), m_height(height) {}
	double result() { return m_width * m_height; }
private:
	double m_width{};
	double m_height{};
};

int main()
{
	double w;
	double h;
	cout << "����, ���� ���̸� �Է��ϼ���. : ";
	cin >> w >> h;
	Rectangle r(w,h);
	cout << "���̴� : " << r.result();

	return 0;
}