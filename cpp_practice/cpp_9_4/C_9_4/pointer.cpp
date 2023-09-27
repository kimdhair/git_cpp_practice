#include <iostream>

int main()
{
	/*int arr[5] = {0,1,2,3,4};

	std::cout << &arr<<std::endl;
	std::cout << &arr[0]<<std::endl;
	std::cout << &arr[1]<<std::endl;

	std::cout << arr << std::endl;
	std::cout << arr[0] << std::endl;
	std::cout << arr[1] << std::endl;

	arr[0] = { 10 };

	std::cout << arr << std::endl;
	std::cout << arr[0] << std::endl;*/

	int n3;
	std::cout << "숫자를 입력 ";
	std::cin >> n3;

	int** arr3 = new int* [n3];

	for (int i = 0; i < n3; i++)
	{
		arr3[i] = new int[n3];
	}

	for (int i = 0; i < n3; i++)
	{
		for (int j = 0; j < n3; j++)
		{
			arr3[i][j] = 0;
		}
	}
	for (int i = 0; i < n3; i++) {
		delete[] arr3[i];
	}
	delete[] arr3;
}
