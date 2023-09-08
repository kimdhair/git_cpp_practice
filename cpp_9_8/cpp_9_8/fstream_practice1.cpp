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
//	std::ifstream file_read("test_file.txt"); // 파일 선언 및 열기를 동시에
//	if (file_read.fail()) {
//		cout << "파일 없음" << endl;
//		//return -1;
//	}
//
//	string file_str = "";
//	string line;
//	while (std::getline(file_read, line)) { // get_line() file의 내용을 한 줄씩 읽어옴
//		file_str += line + "\n";
//		cout << line << endl;
//	}
//
//	file_read.close();
//
//	std::ofstream file;
//	// 프로그램의 출력을 파일에 저장할 수 있게 돕는 클래스(program -> file)
//
//	file.open("test_file2.txt");
//	//ofstream 기본값->  std::ios::out (쓰기모드) | std::ios::trunc (파일의 내용을 모두 삭제하고 열기)
//	//file.open("test_file2.txt", std::ios::out | std::ios::app); // std::ios::app ( 파일의 마지막 줄에 추가 )
//	if (file.fail()) {
//		cout << "파일 열기 실패" << endl;
//		//return -1;
//	}
//	// 보통 쓰기권한에서는 파일이 없을 경우 자동으로 생성됨. 만약 자동으로 생성되지 않았을 경우 fail()이 true가 나올 예정
//	file << file_str; // file_str 을 file에 작성
//	file.close();
//
//	return 0;
//}