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
	std::cout << "���� �Է��Ͻÿ�. ";
	int n1, n2;
	std::cin >> n1;
	std::cin >> n2;
	std::cout << "�� " << add_f( n1, n2)<<std::endl;
	std::cout << "�� " <<sub_f(n1, n2) << std::endl;
	std::cout << "�� " << mul_f(n1, n2) << std::endl;
	std::cout << "������ " << div_f(n1, n2) << std::endl;

}