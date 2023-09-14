#include "class_main.h"

int main() {
	int num;
	int flag = 0;
	string fla;
	string sha;
	vector <Snack*> flavor;
	vector <Snack*> shape;
	int cnt = 0;
	int cnt_candy = 0;
	int cnt_chocolate = 0;

	while (flag == 0) {
		cout << "과자 바구니에 추가할 간식을 고르시오.(1: 사탕, 2: 초콜릿, 0: 종료) : ";
		cin >> num;
		switch (num) {
		case 0:
		{
			flag = 1;
			break;
		}
		case 1: {
			cnt = 0;
			cout << "맛을 입력하세요 : ";
			cin >> fla;
			Snack* s = new Candy(fla);
			flavor.push_back(s);
			++cnt;
			++cnt_candy;
			break;
		}

		case 2: {
			cnt = 0;
			cout << "모양을 입력하세요 : ";
			cin >> sha;
			Snack* s = new Chocolate(sha);
			shape.push_back(s);
			--cnt;
			++cnt_chocolate;
			break;
		}

		default:
			cout << "0-2 사이의 숫자를 입력하세요." << endl;
			break;
		}
	}
	if (cnt > 0)
	{
		cout << "마지막 간식은: candy" << endl;
	}
	else if (cnt < 0)
	{
		cout << "마지막 간식은: chocolate" << endl;
	}

	cout << "과자 바구니에 담긴 간식의 개수는 " << Snack::get_count() << "개 입니다." << endl;
	cout << "과자 바구니에 담긴 간식 확인하기!" << endl;

	for (int i = 0; i < cnt_candy; i++)
	{
		((Candy*)flavor[i])->show_info();
	}
	for (int i = 0; i < cnt_chocolate; i++)
	{
		((Chocolate*)shape[0])->show_info();
	}
	for (Snack* snack : flavor)
	{
		delete snack;
	}
	for (Snack* snack : shape)
	{
		delete snack;
	}
	cout << Util::add(1, 2);

	return 0;
}