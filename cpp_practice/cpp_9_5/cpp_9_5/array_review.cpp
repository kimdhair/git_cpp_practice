#include <iostream>

using namespace std;

int main() {
	int x, y;
	int input;
	int sum = 0;

	cout << "��� ���� ���� �Է��ϼ���: ";
	cin >> x;
	cin >> y;

	int** arr2 = new int* [x];

	for (int i = 0; i < x; i++)
	{
		arr2[i] = new int[y];
	}

	cout << "��� ���Ҹ� �Է��ϼ���: \n";

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cin >> input;
			arr2[i][j] = input;
		}
	}

	cout << endl << "�� ���� ��:\n";
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			sum += arr2[i][j];
		}
		cout << "�� " << i + 1 << ": " << sum << endl;
		sum = 0;
	}

	cout << endl << "�� ���� ��:\n";
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			sum += arr2[j][i];
		}
		cout << "�� " << i + 1 << ": " << sum << endl;
		sum = 0;
	}
}