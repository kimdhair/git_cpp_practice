#include <iostream>
using std::string;
using std::cout;
using std::endl;

namespace seoul {
	string num;
	string landmark;
}

namespace busan {
	string num;
	string landmark;
}

using namespace busan;

int main()
{
	seoul::num = "02";
	num = "051";
	seoul::landmark = "lotte tower";
	landmark = "beach";
	cout << "���� ������ȣ: " << seoul::num << endl;
	cout << "�λ� ������ȣ: " << num << endl;
	cout << "���� ���帶ũ: " << seoul::landmark << endl;
	cout << "�λ� ���帶ũ: " << landmark << endl;
}