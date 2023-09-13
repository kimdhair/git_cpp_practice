#include <iostream>
#include <list>

using namespace std;

class Person {
public:
	virtual void intro() {
		cout << "사람입니다~" << endl;
	}
};

class Student : public Person {
	string name;

public:
	Student(string name) {
		this->name = name;
	}
	void intro() {
		cout << name << "학생입니다." << endl;
	}

	void learn() {
		cout << "배웁니다." << endl;
	}
};

class Teacher : public Person {
	string name;

public:
	Teacher(string name) {
		this->name = name;
	}
	void intro() {
		cout << name << "선생입니다." << endl;
	}

	void teach() {
		cout << "가르칩니다." << endl;
	}
};

int main() {
	Person* pList[3];
	string names[3];

	cout << "3명의 이름을 입력(선생님,학생,학생)" << endl;
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