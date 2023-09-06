#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	
	cin >> str;

	cout << "str1: " << str << endl;

	getline(cin, str);//엔터를 입력으로 처리하기 때문에 두줄 코딩
	getline(cin, str);//\n 까지 문자열 입력

	cout << "str2: " << str << endl;

	getline(cin, str,'a');

	cout << "str3: " << str << endl;

	cout << char(toupper('a')) << endl;
	cout << isalpha('a') << endl;

	return 0;

}