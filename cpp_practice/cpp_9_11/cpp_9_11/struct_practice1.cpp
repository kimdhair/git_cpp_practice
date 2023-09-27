#include <iostream>

using namespace std;

struct Rectangle {
	double width;
	double height;
};

int main()
{
	//double result;
	cout << "가로, 세로 길이를 입력하세요. : ";
	Rectangle r;
	cin >> r.width >> r.height;
	cout << "넓이는 : " << r.width*r.height;

	return 0;
}