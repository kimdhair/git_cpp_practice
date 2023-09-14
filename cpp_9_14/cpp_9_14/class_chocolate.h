#pragma once
#include "class_snack.h"

class Chocolate : public Snack {
	string shape;
public:
	Chocolate(string shape);

	void show_info();
};