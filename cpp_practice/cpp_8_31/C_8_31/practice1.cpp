#include <iostream>

int main()
{
	int i, j;
	
	/*std::cout << "5�� ���\n";

	for (i = 1; i < 10; i++)
	{
		std::cout << "5 * " << i << " = " << 5 * i <<"\n";
	}*/

	std::cout << "1~9�� ���\n";

	for (j = 1; j < 10; j++)
	{
		std::cout << "----" << j << "��----\n";
		for (i = 1; i < 10; i++)
		{
			std::cout << j << " * " << i << " = " << j * i << "\n";
		}
	}
}