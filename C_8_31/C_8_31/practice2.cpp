#include <iostream>

int main()
{
	int i, num;
	int sum = 0;

	std::cout << " 1���� n������ �� ���ϱ�\n\n����(���� ����)�� �Է��ϼ��� : ";
	std::cin >> num;
	for (i = 1; i < num + 1; i++)
	{
		sum=i+sum;
	}
	std::cout << "\n1����" <<num << "������ ���� : " << sum;
}