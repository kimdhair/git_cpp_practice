#include <iostream>

int main()
{
	int age;

	std::cout << "------�ǽ�1-------\n";
	std::cout << "���̸� �Է��ϼ���.\n";
	std::cin >> age;

	
	if (age < 8)
	{
		std::cout << "����\n";
	}
	else if (age < 14)
	{
		std::cout << "�ʵ��л�\n";
	}
	else if (age < 17)
	{
		std::cout << "���л�\n";
	}
	else if (age < 20)
	{
		std::cout << "����л�\n";
	}


	else if (age > 199)
	{
		std::cout << "���̰� �ʹ� �����ϴ�!\n";
	}
	else
	{
		std::cout << "����\n";
	}
//===========================================================================
	std::cout << "------�ǽ�2-------\n";

	std::string name;

	std::cout << "�̸��� �Է��ϼ���\n";
	std::cin >> name;

	if (name == "ȫ�浿")
	{
		std::cout << "����\n";
	}
	else if (name == "������")
	{
		std::cout << "����\n";
	}
	else
	{
		std::cout << "�𸣰ھ��.\n";
	}
//===========================================================================

	std::cout << "------�ǽ�3-------\n";

	int num;
	int num2;

	std::cout << "���ڸ� �Է����ּ���.\n";
	std::cin >> num;

	num2 = num % 5;

	num2 == 0 ? std::cout << num << "�� 5�� ����Դϴ�.\n" : std::cout << num << "�� 5�� ����� �ƴմϴ�.\n";

	

	//===========================================================================

	std::cout << "------�ǽ�4-------\n";

	int n1, n2;
	std::string a;

	std::cout << "������ ���� �ΰ��� �Է��� �ּ���\n";
	std::cin >> n1;
	std::cin >> n2;

	std::cout << "�����ڸ� �Է����ּ��� (+ - * /)\n";
	std::cin >> a;

	if (a == "+")
	{
		std::cout << "*****������ ----> �� " << n1 + n2;
	}
	else if (a == "-")
	{
		std::cout << "*****������ ----> �� " << n1 - n2;
	}
	else if (a == "*")
	{
		std::cout << "*****������ ----> �� " << n1 * n2;
	}
	else if (a == "/")
	{
		std::cout << "*****������ ----> ��: " << n1 / n2 << "  ������: " << n1%n2;
	}
}