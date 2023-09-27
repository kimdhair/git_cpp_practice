#include <iostream>

void jud(int num)
{
	if (num % 2 == 0)
	{
		std::cout << "짝수\n";
	}
	else
		std::cout << "홀수\n";
}

int comp(int n1, int n2, int n3)
{
	if (n1 > n2)
	{
		if (n1 > n3) return n1;
		else return n3;
	}
	else if (n2 > n1)
	{
		if (n2 > n3) return n2;
		else return n3;
	}
	else if (n1 > n3)
	{
		if (n1 > n2) return n1;
		else return n2;
	}
}

int main()
{
	int n1, n2, n3, num;

	std::cout << "숫자 하나를 입력하시오.";
	std::cin >> num;
	jud(num);

	std::cout << "세개의 수를 입력하시오.";
	std::cin >> n1;
	std::cin >> n2;
	std::cin >> n3;
	std::cout << comp(n1, n2, n3);
}