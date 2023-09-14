#pragma once
#include "class_snack.h"

class Candy : public Snack {
	string flavor;
public:
	Candy(string flavor);
	void show_info();
};