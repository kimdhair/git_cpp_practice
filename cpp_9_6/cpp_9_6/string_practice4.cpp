#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s = "Codingon";
	cout << "입력값 " << s << endl;
	s[0]=char(tolower(s[0]));
	cout<<"변환된 값 " << s<<endl;
	cout<<s.substr(s.find("ding"), 4)<<endl;
	cout << s.replace(s.find('o'), 6, "oooooo")<<endl;
	cout << s.erase(s.find('o') + 1, 5);
}