#include <iostream>

int main()
{
	int grade[5];
	int score;
	int sum = 0;
	double avg;

	for (int i = 0; i < 5; i++)
	{
		std::cout << i+1 << "�� �л��� ������ �Է��ϼ���: ";
		std::cin >> score;
		grade[i] = score;
	}
	for (int i = 0; i < 5; i++)
	{
		sum += grade[i];
	}
	avg = (double)sum / (sizeof(grade) / sizeof(grade[0]));
	std::cout << "���� ��� : " << avg;
}