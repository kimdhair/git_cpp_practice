#include "class_candy.h"

Candy::Candy(string flavor) {
	this->price = 200;
	this->name = "»çÅÁ";
	this->maker = "³ó½É";
	this->flavor = flavor;
}
void Candy::show_info() {
	cout << flavor << "¸À »çÅÁ" << endl;
}