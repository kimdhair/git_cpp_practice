#include <iostream>

using namespace std;

int main() {
	int x, y;
	int input;
	int sum = 0;

	cout << "행과 열의 수를 입력하세요: ";
	cin >> x;
	cin >> y;

	int** arr2 = new int* [x];

	for (int i = 0; i < x; i++)
	{
		arr2[i] = new int[y];
	}

	cout << "행렬 원소를 입력하세요: \n";

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cin >> input;
			arr2[i][j] = input;
		}
	}

	cout << endl << "각 행의 합:\n";
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			sum += arr2[i][j];
		}
		cout << "행 " << i + 1 << ": " << sum << endl;
		sum = 0;
	}

	cout << endl << "각 열의 합:\n";
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			sum += arr2[j][i];
		}
		cout << "열 " << i + 1 << ": " << sum << endl;
		sum = 0;
	}
}