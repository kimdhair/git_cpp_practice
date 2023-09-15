#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num;
	int cnt = 1;
	int row = 0;

	cout << "������� �� Ȥ�� ���� ���� �ڿ����� �Է����ּ���.";
	cin >> num;

	int col = num/2;

	int** arr2 = new int* [num];

	for (int i = 0; i < num; i++) {
		arr2[i] = new int[num];
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			arr2[i][j] = 0;
		}
	}

	arr2[row][col] = cnt;
	while (cnt!=num*num) {
		if (row == 0&&col!=num-1) {
			row = num-1;
			++col;
			++cnt;
			arr2[row][col] = cnt;
		}
		else if (row!=0&&col == num-1) {
			--row;
			col = 0;
			++cnt;
			arr2[row][col] = cnt;
		}
		else if (row == 0 && col == num-1) {
			++row;
			++cnt;
			arr2[row][col] = cnt;
		}
		else {
			--row;
			++col;
			++cnt;
			if (cnt == 25) {
				row = num - 1;
				col = num / 2;
				arr2[row][col] = 25;
				break;
			}

			if (arr2[row][col] == 0) {
				arr2[row][col] = cnt;
			}
			else {
				++row;
				++row;
				--col;
				arr2[row][col] = cnt;
			}
		}
	}
	
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}


	for (int i = 0; i < num; i++) {
		delete[] arr2[i];
	}
	delete[] arr2;
}