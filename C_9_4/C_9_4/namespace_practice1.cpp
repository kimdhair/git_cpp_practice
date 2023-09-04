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
	cout << "서울 지역번호: " << seoul::num << endl;
	cout << "부산 지역번호: " << num << endl;
	cout << "서울 랜드마크: " << seoul::landmark << endl;
	cout << "부산 랜드마크: " << landmark << endl;
}