#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s;
	vector<string> mem;
	cout << "3명의 회원에 대한 이름 비밀번호를 순차적으로 입력하세요." << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << "번째 회원 : ";
		getline(cin, s);
		mem.push_back(s);
	}
	ofstream write_file("회원 명부.txt");
	for (int i = 0; i < mem.size(); i++)
	{
		write_file << mem[i] << endl;
	}
	write_file.close();

	/*cout << endl << "-------------회원 명부 파일 읽기--------------" << endl;
	ifstream file("회원 명부.txt");
	string line;
	vector<string> mem_line;
	while (getline(file, line))
	{
		cout << line << endl;
	}
	file.close();*/

	string name;
	string pw;
	int cnt = 0;
	cout << "이름을 입력하세요. : ";
	cin >> name;
	cout << "비번을 입력하세요. : ";
	cin >> pw;
	
	ifstream file("회원 명부.txt");
	string line;
	while (getline(file, line))
	{
		if (line.find(name) != -1) cnt++;
		if (line.find(pw) != -1) cnt++;
	}
	/*for (int i = 0; i < mem.size(); i++)
	{
		if (mem[i].find(name)!=0) cnt++;
		if (mem[i].find(pw)!=0) cnt++;
	}*/
	file.close();
	if (cnt == 2)
	{
		cout << endl << "로그인 성공";
	}
	else cout << endl << "로그인 실패";
}