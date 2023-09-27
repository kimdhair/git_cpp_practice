#include <iostream>

int main()
{
	std::string city[5] = { "a","b","c","d","e" };
	/*for (int i = 0; i < sizeof(city) / sizeof(city[0]); i++)
	{
		std::cout << city[i] << std::endl;
	}*/
	for (std::string ci : city)
	{
		std::cout << ci << std::endl;
	}
}