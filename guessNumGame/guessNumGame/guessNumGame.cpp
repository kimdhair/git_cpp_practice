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

	cout << "���ڴ� 1~25 ������ ���ڸ� �Է��� �� �ֽ��ϴ�." << endl;
	while (user_num.size() < 6) {
		int check = 0;
		cout << user_num.size() + 1 << "��° ��ȣ�� �Է��ϼ���: ";
		cin >> num;
		if (num > 25) {
			cout << "1~25 ������ ���ڸ� �Է����ּ���." << endl;
		}
		else {
			if (flag == 0) {
				user_num.push_back(num);
				flag = 1;
			}
			else {
				for (int i = 0; i < user_num.size(); i++) {
					if (user_num[i] == num) {
						cout << "�̹� �Էµ� �����Դϴ�." << endl;
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
	cout << "=================="<<endl<<"��÷ ��ȣ ����!" << endl;
	for (iter = com_num.begin(); iter != com_num.end(); iter++) {
		cout << *iter<<" ";
		for (int i = 0; i < user_num.size(); i++) {
			if (user_num[i] == *iter) cnt++;
		}
	}
	cout << endl<<"1~7����� ����� ���� �� �ֽ��ϴ�!"<<endl;

	//for�� �Ἥ ��÷��ȣ�� �Է°��� ������ cnt++
	cout << "��� : " << 7 - cnt << "���Դϴ�!"<<endl;
}