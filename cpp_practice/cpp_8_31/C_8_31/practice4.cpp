#include <iostream>

int main()
{
	int num;
	int sum = 0;

	std::cout << "����ڰ� �Է��� ���� ���ϱ�\n";

	while (1)
	{
		std::cout << "���ڸ� �Է��ϼ��� (0: exit) : ";
		std::cin >> num;
		sum += num;
		if (num == 0)
		{
			break;
		}
		else
			continue;
	}
	std::cout << "����ڰ� �Է��� ���� ���� : " << sum;
}