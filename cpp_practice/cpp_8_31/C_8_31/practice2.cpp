#include <iostream>

int main()
{
	int i, num;
	int sum = 0;

	std::cout << " 1부터 n까지의 합 구하기\n\n숫자(양의 정수)를 입력하세요 : ";
	std::cin >> num;
	for (i = 1; i < num + 1; i++)
	{
		sum=i+sum;
	}
	std::cout << "\n1부터" <<num << "까지의 합은 : " << sum;
}