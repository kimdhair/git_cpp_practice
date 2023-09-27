#include <iostream>
#include <list>

using namespace std;

class Person {
public:
	virtual void intro() {
		cout << "����Դϴ�~" << endl;
	}
};

class Student : public Person {
	string name;

public:
	Student(string name) {
		this->name = name;
	}
	void intro() {
		cout << name << "�л��Դϴ�." << endl;
	}

	void learn() {
		cout << "���ϴ�." << endl;
	}
};

class Teacher : public Person {
	string name;

public:
	Teacher(string name) {
		this->name = name;
	}
	void intro() {
		cout << name << "�����Դϴ�." << endl;
	}

	void teach() {
		cout << "����Ĩ�ϴ�." << endl;
	}
};

int main() {
	Person* pList[3];
	string names[3];

	cout << "3���� �̸��� �Է�(������,�л�,�л�)" << endl;
	cin >> names[0] >> names[1] >> names[2];

	Teacher teacher(names[0]);
	Student student1(names[1]);
	Student student2(names[2]);

	pList[0] = &teacher;
	pList[1] = &student1;
	pList[2] = &student2;

	for (auto p : pList) {
		p->intro();
	}

	((Teacher*)pList[0])->teach();
	((Student*)pList[1])->learn();
	((Student*)pList[2])->learn();

	return 0;
}