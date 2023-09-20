#include <iostream>

using namespace std;

class Character {
protected:
	int user_level = 1;
	int user_hp = 20;
	int monster_hp = 10;
	int monster_level = 1;
	int m_attPower = 5;
	int end;
	char answer;
	static int flag;
	int u_attPower;
	//flag,k_attCchance,g_attChance,

public:
	Character() {}
	void moreGame() {
		if (monster_hp <= 0) {
			cout << "========================================" << endl << "         you win!           " << endl << "========================================" << endl;
			++user_level;
			m_reset();
		}
	}
	void stat() {
		/*if (monster_hp <= 0) {
			cout << "========================================" << endl << "         you win!           " << endl << "========================================" << endl;
			++user_level;
			m_reset();
		}*/
		cout << "User" << endl;
		cout << "hp: " << user_hp << " level: " << user_level << " attPower: 0 weapon: ";
		if (flag == 0) {
			cout << "no weapon" << endl << endl;
		}
		else if (flag == 1) {
			cout << "knife" << endl << endl;
		}
		else if (flag == 2) {
			cout << "gun" << endl << endl;
		}
		cout << "Monster" << endl << "hp: " << monster_hp << " level: " << monster_level << " attPower: " << m_attPower << endl << endl;
	}
	void takeW() {
		cout << "choose your weapon(1: knife[attPower:5] 2: gun[attPower:10] 3: EXIT)";
		cin >> flag;
	}
	virtual void atk() {
		//if (flag == 1) {
		//	u_attPower = 5;
		//	cout << "att by knife[attPower: 5 attChance: " << k_attChance << "]";
		//	/*cin >> answer;
		//	if (answer == 'n') {
		//		takeW();
		//	}*/
		//	monster_hp -= u_attPower;
		//	user_hp -= m_attPower;
		//	k_attChance--;
		//	cout << endl << "Monster hp: " << monster_hp << endl << endl;
		//	if (monster_hp > 0)
		//		cout << "Monster att user" << endl << endl << "User hp: " << user_hp << endl;
		//}
		//else if (flag == 2) {
		//	u_attPower = 10;
		//	cout << "att by gun[attPower: 10 attChance: " << g_attChance << "]";
		//	/*cin >> answer;
		//	if (answer == 'n') {
		//		takeW();
		//		atk();
		//	}*/
		//	monster_hp -= u_attPower;
		//	user_hp -= m_attPower;
		//	g_attChance--;
		//	cout << endl << "Monster hp: " << monster_hp << endl << endl;
		//	if (monster_hp > 0)
		//		cout << "Monster att user" << endl << endl << "User hp: " << user_hp << endl;
		//}
	}

	void m_reset() {
		monster_hp = 10;
		user_hp = 20;
		flag = 0;
	}
	int gethp() {
		return user_hp;
	}

	int getlevel() {
		return user_level;
	}

	int getflag() {
		return flag;
	}

	void sethp(int user_hp) {
		this->user_hp = user_hp;
	}

	void setlevel(int user_level) {
		this->user_level = user_level;
	}


};
//int Character::user_hp =  20;
int Character::flag = 0;//필요없음
//int Character::g_attChance = 1;//필요없음
//int Character::k_attChance = 3;//필요없음
//int Character::monster_hp = 10;
//int Character::u_attPower = 0;

class Weapon :public Character {
protected:
	//int attPower;
	//int atkChance;
	//static int flag;

public:
	void atk() {
		//if (flag == 1) {
		//	//u_attPower = 5;
		//	////cout << "att by knife[attPower: 5 attChance: " << k_attChance << "]"<<endl;
		//	///*cin >> answer;
		//	//if (answer == 'n') {
		//	//	takeW();
		//	//}*/
		//	//monster_hp -= u_attPower;
		//	//user_hp -= m_attPower;
		//	//k_attChance--;
		//	cout << endl << "Monster hp: " << monster_hp << endl << endl;
		//	if (monster_hp > 0)
		//		cout << "Monster att user" << endl << endl << "User hp: " << user_hp << endl;
		//}
		//else if (flag == 2) {
		//	//u_attPower = 10;
		//	////cout << "att by gun[attPower: 10 attChance: " << g_attChance << "]"<<endl;
		//	///*cin >> answer;
		//	//if (answer == 'n') {
		//	//	takeW();
		//	//	atk();
		//	//}*/
		//	//monster_hp -= u_attPower;
		//	//user_hp -= m_attPower;
		//	//g_attChance--;
		//	cout << endl << "Monster hp: " << monster_hp << endl << endl;
		//	if (monster_hp > 0)
		//		cout << "Monster att user" << endl << endl << "User hp: " << user_hp << endl;
		//}
	}
};
//int Weapon::flag = 0;
class Gun :public Weapon {
private:
	int g_attChance = 1;
	int g_attPower = 10;
public:
	void gun() {
		//flag = 2;
		cout << "공격력 - 10, 공격가능횟수 - " << g_attChance << ", 공격하기 - \"총쏘기\"" << endl;
		monster_hp -= g_attPower;
		user_hp -= m_attPower;
		g_attChance--;
		cout << endl << "Monster hp: " << monster_hp << endl << endl;
		if (monster_hp > 0)
			cout << "Monster att user" << endl << endl << "User hp: " << user_hp << endl;
	}
};

class Knife :public Weapon {
private:
	int k_attChance = 3;
	int k_attPower = 5;
public:
	void knife() {
		//flag = 1;
		cout << "공격력 - 5, 공격가능횟수 - " << k_attChance << ", 공격하기 - \"찌르기\"" << endl;
		monster_hp -= k_attPower;
		user_hp -= m_attPower;
		k_attChance--;
		cout << endl << "Monster hp: " << monster_hp << endl << endl;
		if (monster_hp > 0)
			cout << "Monster att user" << endl << endl << "User hp: " << user_hp << endl;
	}
};

int main() {
	int hp = 30;
	int level = 1;
	cout << "==========================================" << endl << "          welcome to game          " << endl << "==========================================" << endl;
	Character c;
	Character* c1;
	Gun g;
	Knife k;
	Weapon w;
	c1 = &w;
	/*gunKnife gk;
	c1 = &gk;*/
	while (1) {
		cout << "User turn!" << endl << "-------------------------------------------" << endl;
		c.stat();
		c.takeW();
		if (c.getflag() == 3) break;
		else if (c.getflag() == 2) g.gun();
		else if (c.getflag() == 1)k.knife();
		c1->atk();
		c.moreGame();
		cout << endl;
	}




	/*c.sethp(hp);
	c.setlevel(level);
	c.stat();
	cout << "choose your weapon(1:knife[atkPower:5] 2:gun[atkPower:10])";
	cin >> flag;
	if (flag == 1) {
		gk.knife();
		c.atk();
		c.stat();
	}
	else if (flag == 2) {
		gk.gun();
		c.atk();
		c.stat();
	}*/

}