#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int num1;
	int num2;
	string str1;
	string str2;

	while (1)
	{
		cout << "1번 스트링: ";
		cin >> str1;
		cout << "2번 스트링: ";
		cin >> str2;

		stringstream ss1(str1);
		stringstream ss2(str2);

		//if (ss1 >> num1)
		//{
		//	//cout << "1번 스트링 숫자: " << num1 << endl;
		//}
		//if (ss2 >> num2)
		//{
		//	//cout << "2번 스트링 숫자: " << num2 << endl;
		//}

		ss1 >> num1;
		ss2 >> num2;
		cout << num1<<endl;
		cout << num2<<endl;

		if (to_string(num1).length() == str1.length() && to_string(num2).length() == str2.length()) break;
	}

	/*string s1;
	string s2;

	int s_i1;
	int s_i2;


	int cnt1 = 0;
	int cnt2 = 0;

	while (1)
	{
		cout << "1번째 문자열을 입력하시오. : ";
		cin >> s1;
		cout << "2번째 문자열을 입력하시오. : ";
		cin >> s2;

		for (int i = 0; i < s1.length(); i++)
		{
			if (isdigit(s1[i]))
			{
				cnt1++;
			}
		}
		for (int i = 0; i < s2.length(); i++)
		{
			if (isdigit(s2[i]))
			{
				cnt2++;
			}
		}
		if (cnt1 == s1.length() && cnt2 == s2.length()) break;
		else
		{
			cnt1 = 0;
			cnt2 = 0;
		}
	}
	string s3 = s1;
	cout << s3.append(s2) << endl;
	s_i1 = stoi(s1);
	s_i2 = stoi(s2);
	cout << s_i1 + s_i2;*/
}