#include "class_candy.h"

Candy::Candy(string flavor) {
	this->price = 200;
	this->name = "����";
	this->maker = "���";
	this->flavor = flavor;
}
void Candy::show_info() {
	cout << flavor << "�� ����" << endl;
}