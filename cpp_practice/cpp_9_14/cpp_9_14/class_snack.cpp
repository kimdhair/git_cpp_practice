#include "class_snack.h"


Snack::Snack() {
	count++;
}

Snack::~Snack() { count--; }

int Snack::get_count() {
	return count;
}

string Snack::get_name() {
	return name;
}

void Snack::show_info() {
	cout << "�����Դϴ�~" << endl;
}

int Snack::count = 0;