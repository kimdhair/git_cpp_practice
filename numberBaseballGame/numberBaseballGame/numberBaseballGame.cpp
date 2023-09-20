#include <ctime>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	srand(time(NULL));
	int strike = 0;
	int ball = 0;
	int flag = 0;
	int cnt = 0;
	vector<int> answer;
	vector<int> check_num = { 1,2,3,4,5,6,7,8,9 };

	/*while (answer.size() < 3)
	{
		int num = rand();
		answer.push_back(num % 9 + 1);
		sort(answer.begin(), answer.end());
		answer.erase(unique(answer.begin(), answer.end()), answer.end());
	}
	swap(answer[0], answer[1]);*/

	while (answer.size() < 3) {
		int num = rand();
		num = num % 9 + 1;
		for (int j = 0; j < check_num.size(); j++) {
			if (num == check_num[j]) {
				answer.push_back(check_num[j]);
				check_num[j] = 0;
			}
		}
	}


	cout << "야구게임!" << endl;
	while (1) {
		vector<int> num(3);

		cout << "1~9 사이의 숫자 3개를 입력하시오 (이외의 숫자: 종료)" << endl;

		for (int i = 0; i < 3; i++) {
			cin >> num[i];
			if (num[i] > 9 || num[i] < 1) {
				cout << "게임을 종료하였습니다.";
				flag = 1;
				break;
			}
		}
		for (int i = 0; i < 3; i++) {
			if (num[i] == answer[i]) {
				strike++;
			}
			else {
				for (int j = 0; j < 3; j++) {
					if (num[i] == answer[j]) {
						ball++;
					}
				}
			}
		}
		++cnt;
		if (strike == 3) {
			cout << cnt << "번 만에 맞췄습니다.";
			break;
		}
		if (flag == 1) break;
		cout << "strike: " << strike << "     ball: " << ball << endl;
		strike = 0;
		ball = 0;
	}





	/*for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << " ";
	}*/
}