#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	srand(time(NULL));
	int cnt = 0;
	int in;

	while (cnt != 31) {
		int num = rand();
		int com_num = num % 3 + 1;

		cout << "개수를 입력하세요: ";
		cin >> in;
		if (in > 3||in<1) {
			cout << "1~3 사이의 수를 입력하세요." << endl;
		}
		else {
			cout << "사용자가 부른 숫자!" << endl;
			for (int i = 0; i < in; i++) {
				++cnt;
				cout << cnt << endl;
			}
			cout << "컴퓨터가 부른 숫자!" << endl;
			for (int i = 0; i < com_num; i++) {
				++cnt;
				if (cnt== 31) {
					cout << cnt << endl;
					break;
				}
				cout << cnt << endl;
			}
		}
		cout << endl;
	}
	cout << "게임 종료! 사용자의 승리입니다.";
}