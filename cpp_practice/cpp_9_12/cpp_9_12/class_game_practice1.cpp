#include <iostream>

using namespace std;

class Character {
private:
	string name;
	int level=0;
	int item_num=0;
	int react;
	int flag = 0;

public:
	Character(string name, int level, int item_num) :name(name), level(level), item_num(item_num) {}

	void setname(string name) {
		this->name = name;
	}
	void setlevel(int level) {
		this->level = level;
	}
	void setitem_num(int item_num) {
		this->item_num = item_num;
	}
	void setreact(int react) {
		this->react = react;
	}
	int getflag() {
		return flag;
	}
	string getname() {
		return name;
	}
	int getlevel() {
		return level;
	}
	int getitem_num() {
		return item_num;
	}
	void game()
	{
		cout << "� ������ �����ϰڽ��ϱ�?(0: ����) ";
		cin >> react;
		switch (react)
		{
		case 0:
			cout << "������ ����Ǿ����ϴ�." << endl;
			flag = 1;
			break;
		case 1:
			cout << "�� �̸��� �Է����ּ��� : ";
			cin >> name;
			cout << "�̸��� ����Ǿ����ϴ�." << endl<<"new name : "<<name<<endl;
			break;
		case 2:
			cout << "level up!!" << endl;
			++level;
			cout << "���� ���� : " << level << endl;
			break;
		case 3:
			++item_num;
			cout << "�������� ������ϴ�!" << endl << "���� ������ ���� : " << item_num << endl;
			break;
		case 4:
			--item_num;
			cout << "�������� ����߽��ϴ�!" << endl << "���� ������ ���� : " << item_num << endl;
			break;
		case 5:
			cout << "�̸�: " << name << endl << "����: " << level << endl << "���� ������ ����: " << item_num << endl;
			break;
		}
	}
};

int main()
{
	string name="";
	int level=0;
	int item_num=0;
	//int react;
	Character c(name,level,item_num);
	cout << "�̸��� �Է����ּ��� : ";
	cin >> name;
	c.setname(name);
	cout << c.getname() << " ĳ���Ͱ� ���� �Ǿ����ϴ�." << endl;
	/*cout << "� ������ �����ϰڽ��ϱ�?(0: ����) ";
	cin >> react;
	c.setreact(react);*/
	while (c.getflag() == 0)
	{
		c.game();
	}
}