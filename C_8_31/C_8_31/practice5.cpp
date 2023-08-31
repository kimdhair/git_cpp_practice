#include <iostream>

int add_f(int n1, int n2)
{
	return n1 + n2;
}

int sub_f(int n1, int n2)
{
	return n1 - n2;
}

int mul_f(int n1, int n2)
{
	return n1 * n2;
}

double div_f(int n1, int n2)
{
	return (double)n1 / (double)n2;
}

int main()
{
	std::cout << "수를 입력하시오. ";
	int n1, n2;
	std::cin >> n1;
	std::cin >> n2;
	std::cout << "합 " << add_f( n1, n2)<<std::endl;
	std::cout << "차 " <<sub_f(n1, n2) << std::endl;
	std::cout << "곱 " << mul_f(n1, n2) << std::endl;
	std::cout << "나누기 " << div_f(n1, n2) << std::endl;

}