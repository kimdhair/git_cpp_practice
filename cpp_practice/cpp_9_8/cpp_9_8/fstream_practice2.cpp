#include <fstream>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string s;
	vector<string> mem;
	cout << "3���� ȸ���� ���� �̸� ��й�ȣ�� ���������� �Է��ϼ���." << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << i+1 << "��° ȸ�� : ";
		getline(cin,s);
		mem.push_back(s);
	}
	ofstream write_file("ȸ�� ���.txt");
	for (int i = 0; i < mem.size(); i++)
	{
		write_file << mem[i] << endl;
	}
	write_file.close();

	cout<<endl << "-------------ȸ�� ��� ���� �б�--------------" << endl;
	ifstream file("ȸ�� ���.txt");
	string line;
	vector<string> mem_line;
	while (getline(file, line))
	{
		cout << line << endl;
	}
	file.close();
}