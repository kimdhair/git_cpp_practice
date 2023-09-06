#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1;
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
		if (cnt1 == s1.length()&&cnt2==s2.length()) break;
		else
		{
			cnt1 = 0;
			cnt2 = 0;
		}
	}
	string s3 = s1;
	cout<<s3.append(s2)<<endl;
	s_i1=stoi(s1);
	s_i2=stoi(s2);
	cout << s_i1+s_i2;
}