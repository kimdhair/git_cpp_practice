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
		cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�.(1: ����, 2: ���ݸ�, 0: ����) : ";
		cin >> num;
		switch (num) {
		case 0:
		{
			flag = 1;
			break;
		}
		case 1: {
			cnt = 0;
			cout << "���� �Է��ϼ��� : ";
			cin >> fla;
			Snack* s = new Candy(fla);
			flavor.push_back(s);
			++cnt;
			++cnt_candy;
			break;
		}

		case 2: {
			cnt = 0;
			cout << "����� �Է��ϼ��� : ";
			cin >> sha;
			Snack* s = new Chocolate(sha);
			shape.push_back(s);
			--cnt;
			++cnt_chocolate;
			break;
		}

		default:
			cout << "0-2 ������ ���ڸ� �Է��ϼ���." << endl;
			break;
		}
	}
	if (cnt > 0)
	{
		cout << "������ ������: candy" << endl;
	}
	else if (cnt < 0)
	{
		cout << "������ ������: chocolate" << endl;
	}

	cout << "���� �ٱ��Ͽ� ��� ������ ������ " << Snack::get_count() << "�� �Դϴ�." << endl;
	cout << "���� �ٱ��Ͽ� ��� ���� Ȯ���ϱ�!" << endl;

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