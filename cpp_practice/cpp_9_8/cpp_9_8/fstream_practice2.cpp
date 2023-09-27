#include <fstream>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string s;
	vector<string> mem;
	cout << "3명의 회원에 대한 이름 비밀번호를 순차적으로 입력하세요." << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << i+1 << "번째 회원 : ";
		getline(cin,s);
		mem.push_back(s);
	}
	ofstream write_file("회원 명부.txt");
	for (int i = 0; i < mem.size(); i++)
	{
		write_file << mem[i] << endl;
	}
	write_file.close();

	cout<<endl << "-------------회원 명부 파일 읽기--------------" << endl;
	ifstream file("회원 명부.txt");
	string line;
	vector<string> mem_line;
	while (getline(file, line))
	{
		cout << line << endl;
	}
	file.close();
}