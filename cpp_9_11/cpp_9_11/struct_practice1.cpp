#include <iostream>

using namespace std;

struct Rectangle {
	double width;
	double height;
};

int main()
{
	//double result;
	cout << "����, ���� ���̸� �Է��ϼ���. : ";
	Rectangle r;
	cin >> r.width >> r.height;
	cout << "���̴� : " << r.width*r.height;

	return 0;
}