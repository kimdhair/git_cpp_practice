#include <iostream>

using namespace std;

int main()
{
	int num,score;
	int sum = 0;
	double avg = 0;
	cout << "�л� ���� �Է��Ͻÿ�: ";
	cin >> num;
	int* arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << "�� �л��� ������ �Է��ϼ���: ";
		cin >> score;
		cout << endl;
		arr[i] = score;
	}
	for (int i = 0; i < num; i++)
	{
		sum += arr[i];
	}
	avg = (double)sum / num;
	cout << "���� ��� : " << avg;

	delete[] arr;
}