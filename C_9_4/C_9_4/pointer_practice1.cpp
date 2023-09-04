#include <iostream>

int main()
{
	int x, y;
	std::cout << "수를 입력하시오 ";
	std::cin >> x;
	std::cin >> y;
	int sum = 0;

	if (x <= 0 || y <= 0)
	{
		std::cout << std::endl << "error 양수를 입력하시오" << std::endl;
		std::cin >> x;
		std::cin >> y;
	}
	int** arr = new int* [x];

	for (int i = 0; i < x; i++)
	{
		arr[i] = new int[y];
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			arr[i][j] = sum + 1;
			sum++;
		}
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < x; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}