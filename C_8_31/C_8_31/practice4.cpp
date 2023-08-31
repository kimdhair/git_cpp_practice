#include <iostream>

int main()
{
	int num;
	int sum = 0;

	std::cout << "사용자가 입력한 숫자 더하기\n";

	while (1)
	{
		std::cout << "숫자를 입력하세요 (0: exit) : ";
		std::cin >> num;
		sum += num;
		if (num == 0)
		{
			break;
		}
		else
			continue;
	}
	std::cout << "사용자가 입력한 수의 합은 : " << sum;
}