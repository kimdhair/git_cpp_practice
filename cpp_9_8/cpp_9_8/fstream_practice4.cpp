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
	string tel;
	int cnt = 0;
	int write = 0;
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
		cout << endl << "�α��� ����"<<endl<<"��ȭ��ȣ�� �Է��� �ּ���. : ";
		cin >> tel;
	}
	else cout << endl << "�α��� ����";

	int line_num;
	vector<string> v_s;
	string name_line;
	ifstream member_tel("��ȭ��ȣ.txt");
	while (getline(member_tel, name_line))
	{
		v_s.push_back(name_line);
		/*if (name_line.find(name) != -1)
		{
			write = 1;
			line_num = name_line.find(name);
		}*/
	}
	member_tel.close();

	for (int i = 0; i < v_s.size(); i++)
	{
		if (v_s[i].find(name) != -1)
		{
			v_s[i].replace(v_s[i].find(name) + name.size() + 1, tel.size(), tel);
		}
		else
		{
			v_s.push_back(name +" "+ tel);
			break;
		}
	}

	ofstream mem_tel("��ȭ��ȣ.txt");
	for (int i = 0; i < v_s.size(); i++)
	{
		mem_tel << v_s[i] << endl;
	}
	mem_tel.close();
	/*else
	{
		ofstream member_tel("��ȭ��ȣ.txt");
		member_tel.close();
	}*/
}