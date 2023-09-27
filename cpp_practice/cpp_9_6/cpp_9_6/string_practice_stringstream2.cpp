#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

//int main() {
//	istringstream iss("test\n123 aaa 456");
//	string s1, s2;
//	int i1, i2;
//	iss >> s1 >> i1 >> s2 >> i2; // 문자열을 파싱하고 변수형에 맞게 변환한다.
//
//	cout << s1 << endl; // test
//	cout << i1 << endl; // 123
//	cout << s2 << endl; // aaa
//	cout << i2 << endl; // 456
//}

int main(void) {
    vector<long long> time;
    string str = "2019:06:30 12:00:30",token; // 연 월 일 시 분 초 

    stringstream ss(str);

    while (getline(ss, token, ':'))
    {
        cout << token << endl;
    }

    //for (int i = 0; i < str.size(); i++)
    //    if (str[i] == ':') str[i] = ' ';

    //long long num = 0;
    //stringstream stream;
    //stream.str(str);
    //while (stream >> num)
    //    time.push_back(num);

    //long long second = 0;
    //second += time[0] * 365 * 24 * 60 * 60; // 연 
    //second += time[1] * 30 * 24 * 60 * 60; // 월
    //second += time[2] * 24 * 60 * 60; // 일
    //second += time[3] * 60 * 60; // 시 
    //second += time[4] * 60; // 분 
    //second += time[5]; // 초 
    //cout << second;
}