#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s;
	vector<string> mem;
	cout << "3���� ȸ���� ���� �̸� ��й�ȣ�� ���������� �Է��ϼ���." << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << "��° ȸ�� : ";
		getline(cin, s);
		mem.push_back(s);
	}
	ofstream write_file("ȸ�� ���.txt");
	for (int i = 0; i < mem.size(); i++)
	{
		write_file << mem[i] << endl;
	}
	write_file.close();

	/*cout << endl << "-------------ȸ�� ��� ���� �б�--------------" << endl;
	ifstream file("ȸ�� ���.txt");
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
	cout << "�̸��� �Է��ϼ���. : ";
	cin >> name;
	cout << "����� �Է��ϼ���. : ";
	cin >> pw;
	
	ifstream file("ȸ�� ���.txt");
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
		cout << endl << "�α��� ����";
	}
	else cout << endl << "�α��� ����";
}