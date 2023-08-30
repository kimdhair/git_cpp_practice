#include <iostream>

int main()
{
	int age;

	std::cout << "------실습1-------\n";
	std::cout << "나이를 입력하세요.\n";
	std::cin >> age;

	
	if (age < 8)
	{
		std::cout << "유아\n";
	}
	else if (age < 14)
	{
		std::cout << "초등학생\n";
	}
	else if (age < 17)
	{
		std::cout << "중학생\n";
	}
	else if (age < 20)
	{
		std::cout << "고등학생\n";
	}


	else if (age > 199)
	{
		std::cout << "나이가 너무 많습니다!\n";
	}
	else
	{
		std::cout << "성인\n";
	}
//===========================================================================
	std::cout << "------실습2-------\n";

	std::string name;

	std::cout << "이름을 입력하세요\n";
	std::cin >> name;

	if (name == "홍길동")
	{
		std::cout << "남자\n";
	}
	else if (name == "성춘향")
	{
		std::cout << "여자\n";
	}
	else
	{
		std::cout << "모르겠어요.\n";
	}
//===========================================================================

	std::cout << "------실습3-------\n";

	int num;
	int num2;

	std::cout << "숫자를 입력해주세요.\n";
	std::cin >> num;

	num2 = num % 5;

	num2 == 0 ? std::cout << num << "는 5의 배수입니다.\n" : std::cout << num << "는 5의 배수가 아닙니다.\n";

	

	//===========================================================================

	std::cout << "------실습4-------\n";

	int n1, n2;
	std::string a;

	std::cout << "연산할 정수 두개를 입력해 주세요\n";
	std::cin >> n1;
	std::cin >> n2;

	std::cout << "연산자를 입력해주세요 (+ - * /)\n";
	std::cin >> a;

	if (a == "+")
	{
		std::cout << "*****연산결과 ----> 합 " << n1 + n2;
	}
	else if (a == "-")
	{
		std::cout << "*****연산결과 ----> 차 " << n1 - n2;
	}
	else if (a == "*")
	{
		std::cout << "*****연산결과 ----> 곱 " << n1 * n2;
	}
	else if (a == "/")
	{
		std::cout << "*****연산결과 ----> 몫: " << n1 / n2 << "  나머지: " << n1%n2;
	}
}