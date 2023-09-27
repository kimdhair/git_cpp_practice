#include <iostream>

int main()
{
	std::string name;
	std::string city2[5];
	std::cout << "5개 나라를 입력하세요 ";
	for (int i = 0; i < 5; i++)
	{
		std::cin >> name;
		city2[i] = name;
	}
	for (int i = 0; i < sizeof(city2) / sizeof(city2[0]); i++)
	{
		std::cout << city2[i] << std::endl;
	}
}