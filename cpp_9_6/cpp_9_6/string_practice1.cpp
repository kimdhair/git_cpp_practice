#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	
	cin >> str;

	cout << "str1: " << str << endl;

	getline(cin, str);//���͸� �Է����� ó���ϱ� ������ ���� �ڵ�
	getline(cin, str);//\n ���� ���ڿ� �Է�

	cout << "str2: " << str << endl;

	getline(cin, str,'a');

	cout << "str3: " << str << endl;

	cout << char(toupper('a')) << endl;
	cout << isalpha('a') << endl;

	return 0;

}