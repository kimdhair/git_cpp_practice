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

		cout << "������ �Է��ϼ���: ";
		cin >> in;
		if (in > 3||in<1) {
			cout << "1~3 ������ ���� �Է��ϼ���." << endl;
		}
		else {
			cout << "����ڰ� �θ� ����!" << endl;
			for (int i = 0; i < in; i++) {
				++cnt;
				cout << cnt << endl;
			}
			cout << "��ǻ�Ͱ� �θ� ����!" << endl;
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
	cout << "���� ����! ������� �¸��Դϴ�.";
}