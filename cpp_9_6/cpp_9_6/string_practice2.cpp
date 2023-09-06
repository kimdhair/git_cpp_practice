#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*string s = "Police say two people are suspected of trying to create\
 a shortcut for their construction work.The two have been detained and \
the case is under further investigation.The 38-year-old man and \
55-year-old woman were working near the affected area, the 32nd Great \
Wall.";
	cout << s.length()<<endl;
	cout << s.at(99)<<endl;
	cout << s.find("two") << endl;
	cout << s.find("two",12) << endl;*/

	string s1 = "apple";
	string s2 = "banana";
	cout << s1.size() << endl;
	s1.resize(6, 'b');
	cout << s1 << endl;
	cout<<s1.append(s2,5,3)<<endl;
	cout<<s1.insert(2,s2)<<endl;
	cout << s1.substr(2,6) << endl;
	cout << s1 << endl<< s2 << endl;
	cout << s1.compare(s2) << endl;
	cout << toupper('a' + ('A' - 'a')) << endl;

	return 0;
}