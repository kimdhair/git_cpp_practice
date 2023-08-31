#include <iostream>

/*using namespace std;

int main()
{
	int i = 1;
	int j = 1;
	cout << "--------------실습 1------------------\n";
	cout << "1~9단 출력\n";

	while (j < 10)
	{
		cout << "----" << j << "단----\n";
		while (i < 10)
		{
			cout << j << " * " << i << " = " << j * i << "\n";
			i++;
		}
		i = 1;
		j++;
	}

	cout << "---------------실습 2-----------------\n";
	int k = 1;
	int sum = 0;
	int num;

	cout << " 1부터 n까지의 합 구하기\n\n숫자(양의 정수)를 입력하세요 : ";
	cin >> num;

	while (k < num + 1)
	{
		sum = k + sum;
		k++;
	}
	cout << "\n1부터 100까지의 합은 : " << sum;
}*/

int main()
{
	int i = 1;
	int j = 1;
	std::cout << "--------------실습 1------------------\n";
	std::cout << "1~9단 출력\n";

	while (j < 10)
	{
		std::cout << "----" << j << "단----\n";
		while (i < 10)
		{
			std::cout << j << " * " << i << " = " << j * i << "\n";
			i++;
		}
		i = 1;
		j++;
	}

	std::cout << "---------------실습 2-----------------\n";
	int k = 1;
	int sum = 0;
	int num;

	std::cout << " 1부터 n까지의 합 구하기\n\n숫자(양의 정수)를 입력하세요 : ";
	std::cin >> num;

	while (k < num + 1)
	{
		sum = k + sum;
		k++;
	}
	std::cout << "\n1부터" << num <<"까지의 합은 : " << sum;
}