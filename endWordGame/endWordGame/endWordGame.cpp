#include <ctime>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<string> game = { "airplane" };
	int cnt = 0;

	for (int i = 0; i < 100; i++)
	{
		int num = 0;
		string word = "";
		clock_t startTime = clock();

		if (game.size() == 1) {
			cout << game[0] << endl;
		}
		else {
			for (int j = 1; j < game.size(); j++) {
				cout << game[j - 1] << "->";
			}
			cout << game.back() << endl;
		}

		//if (num == 0) {
		cout << "���� �ܾ �Է��ϼ��� : ";
		cin >> word;
		//++num;
	//}

		if (word[0] == game.back()[game.back().size() - 1])
		{
			for (int i = 0; i < game.size(); i++) {
				if (word == game[i]) {
					cout << "�ߺ��� �ܾ��Դϴ�." << endl;
					num = 1;
					break;
				}
			}
			if (num == 0) {
				game.push_back(word);
				++cnt;
			}
		}
		else {
			cout << "�߸��� �Է��Դϴ�." << endl;
		}

		cout << endl;

		clock_t endTime = clock();
		if ((endTime - startTime) / CLOCKS_PER_SEC > 30) {
			break;
			cout << "Ÿ�� ����!" << endl;
		}
	}
	cout << "���� ����!" << endl << "�� �Է��� �ܾ� ���� : " << cnt;
}