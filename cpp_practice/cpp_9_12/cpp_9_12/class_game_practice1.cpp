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
		cout << "어떤 동작을 실행하겠습니까?(0: 종료) ";
		cin >> react;
		switch (react)
		{
		case 0:
			cout << "게임이 종료되었습니다." << endl;
			flag = 1;
			break;
		case 1:
			cout << "새 이름을 입력해주세요 : ";
			cin >> name;
			cout << "이름이 변경되었습니다." << endl<<"new name : "<<name<<endl;
			break;
		case 2:
			cout << "level up!!" << endl;
			++level;
			cout << "현재 레벨 : " << level << endl;
			break;
		case 3:
			++item_num;
			cout << "아이템을 얻었습니다!" << endl << "현재 아이템 개수 : " << item_num << endl;
			break;
		case 4:
			--item_num;
			cout << "아이템을 사용했습니다!" << endl << "현재 아이템 개수 : " << item_num << endl;
			break;
		case 5:
			cout << "이름: " << name << endl << "레벨: " << level << endl << "현재 아이템 개수: " << item_num << endl;
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
	cout << "이름을 입력해주세요 : ";
	cin >> name;
	c.setname(name);
	cout << c.getname() << " 캐릭터가 생성 되었습니다." << endl;
	/*cout << "어떤 동작을 실행하겠습니까?(0: 종료) ";
	cin >> react;
	c.setreact(react);*/
	while (c.getflag() == 0)
	{
		c.game();
	}
}