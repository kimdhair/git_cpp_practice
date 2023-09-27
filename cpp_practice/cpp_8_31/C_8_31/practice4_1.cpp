#include <iostream>

int main()
{
	int num;

	std::cout << "input : ";
	std::cin >> num;
	std::cout << "output :\n";
	for (int i = 1; i < num+1; i++)
	{
		for (int j = 1; j <i+1; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
}