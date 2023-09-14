#include "class_chocolate.h"


Chocolate::Chocolate(string shape) {
	this->price = 1000;
	this->name = "ÃÊÄÝ¸´";
	this->maker = "·Ôµ¥";
	this->shape = shape;
}

void Chocolate::show_info() {
	cout << shape << "¸ð¾ç ÃÊÄÝ¸´" << endl;
}
