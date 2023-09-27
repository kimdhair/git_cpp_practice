#include <ctime>
#include <cstdlib>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
	srand(time(NULL));
	list<int> com_num;
	list<int>::iterator iter;
	vector<int> user_num;
	int num;
	int cnt = 0;
	int flag = 0;

	while (com_num.size() < 6)
	{
		int num = rand();
		com_num.push_back(num % 25 + 1);
		com_num.sort();
		com_num.unique();
	}

	cout << "숫자는 1~25 까지의 숫자만 입력할 수 있습니다." << endl;
	while (user_num.size() < 6) {
		int check = 0;
		cout << user_num.size() + 1 << "번째 번호를 입력하세요: ";
		cin >> num;
		if (num > 25) {
			cout << "1~25 사이의 숫자만 입력해주세요." << endl;
		}
		else {
			if (flag == 0) {
				user_num.push_back(num);
				flag = 1;
			}
			else {
				for (int i = 0; i < user_num.size(); i++) {
					if (user_num[i] == num) {
						cout << "이미 입력된 숫자입니다." << endl;
						check = 1;
						break;
					}
				}
				if (check == 0) {
					user_num.push_back(num);
				}
				check = 0;
			}
		}
	}
	cout << "=================="<<endl<<"당첨 번호 공개!" << endl;
	for (iter = com_num.begin(); iter != com_num.end(); iter++) {
		cout << *iter<<" ";
		for (int i = 0; i < user_num.size(); i++) {
			if (user_num[i] == *iter) cnt++;
		}
	}
	cout << endl<<"1~7등까지 결과가 나올 수 있습니다!"<<endl;

	//for문 써서 당첨번호와 입력값이 맞으면 cnt++
	cout << "결과 : " << 7 - cnt << "등입니다!"<<endl;
}