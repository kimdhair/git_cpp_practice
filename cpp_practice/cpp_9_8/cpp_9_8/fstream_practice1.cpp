#include <vector>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	ifstream read_file("test.txt");
	vector<string> file_str;
	string line;
	while (getline(read_file, line))
	{
		file_str.push_back(line);
	}
	read_file.close();

	ofstream write_file("test2.txt");
	for (int i = file_str.size() - 1; i >= 0; i--)
	{
		write_file << file_str[i]<<endl;
	}
	write_file.close();

	return 0;
}

//#include <iostream>
//#include <fstream>
//#include <string> 
//
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;
//
//int main() {
//	//std::ifstream file_read;
//	//file_read.open("test_file.txt");
//
//	std::ifstream file_read("test_file.txt"); // ���� ���� �� ���⸦ ���ÿ�
//	if (file_read.fail()) {
//		cout << "���� ����" << endl;
//		//return -1;
//	}
//
//	string file_str = "";
//	string line;
//	while (std::getline(file_read, line)) { // get_line() file�� ������ �� �پ� �о��
//		file_str += line + "\n";
//		cout << line << endl;
//	}
//
//	file_read.close();
//
//	std::ofstream file;
//	// ���α׷��� ����� ���Ͽ� ������ �� �ְ� ���� Ŭ����(program -> file)
//
//	file.open("test_file2.txt");
//	//ofstream �⺻��->  std::ios::out (������) | std::ios::trunc (������ ������ ��� �����ϰ� ����)
//	//file.open("test_file2.txt", std::ios::out | std::ios::app); // std::ios::app ( ������ ������ �ٿ� �߰� )
//	if (file.fail()) {
//		cout << "���� ���� ����" << endl;
//		//return -1;
//	}
//	// ���� ������ѿ����� ������ ���� ��� �ڵ����� ������. ���� �ڵ����� �������� �ʾ��� ��� fail()�� true�� ���� ����
//	file << file_str; // file_str �� file�� �ۼ�
//	file.close();
//
//	return 0;
//}