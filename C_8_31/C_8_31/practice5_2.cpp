#include <iostream>

int comp(int n1, int n2, int n3, int n4)
{
	int temp1 = n1 < n2 ? n1 : n2;
	int temp2 = n3 < n4 ? n3 : n4;
	return temp1 < temp2 ? temp1 : temp2;
 }

int main()
{
	int n1, n2, n3, n4;
	std::cout << "수 4개를 입력하시오. ";
	std::cin >> n1;
	std::cin >> n2;
	std::cin >> n3;
	std::cin >> n4;
	std::cout << "최소값 : "<<comp(n1, n2, n3, n4);
}