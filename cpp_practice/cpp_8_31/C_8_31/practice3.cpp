#include <iostream>

/*using namespace std;

int main()
{
	int i = 1;
	int j = 1;
	cout << "--------------�ǽ� 1------------------\n";
	cout << "1~9�� ���\n";

	while (j < 10)
	{
		cout << "----" << j << "��----\n";
		while (i < 10)
		{
			cout << j << " * " << i << " = " << j * i << "\n";
			i++;
		}
		i = 1;
		j++;
	}

	cout << "---------------�ǽ� 2-----------------\n";
	int k = 1;
	int sum = 0;
	int num;

	cout << " 1���� n������ �� ���ϱ�\n\n����(���� ����)�� �Է��ϼ��� : ";
	cin >> num;

	while (k < num + 1)
	{
		sum = k + sum;
		k++;
	}
	cout << "\n1���� 100������ ���� : " << sum;
}*/

int main()
{
	int i = 1;
	int j = 1;
	std::cout << "--------------�ǽ� 1------------------\n";
	std::cout << "1~9�� ���\n";

	while (j < 10)
	{
		std::cout << "----" << j << "��----\n";
		while (i < 10)
		{
			std::cout << j << " * " << i << " = " << j * i << "\n";
			i++;
		}
		i = 1;
		j++;
	}

	std::cout << "---------------�ǽ� 2-----------------\n";
	int k = 1;
	int sum = 0;
	int num;

	std::cout << " 1���� n������ �� ���ϱ�\n\n����(���� ����)�� �Է��ϼ��� : ";
	std::cin >> num;

	while (k < num + 1)
	{
		sum = k + sum;
		k++;
	}
	std::cout << "\n1����" << num <<"������ ���� : " << sum;
}