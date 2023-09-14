#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Snack {
protected:
	int price;
	string name;
	string maker;
	static int count;
public:
	Snack();
	virtual ~Snack();
	static int get_count();
	string get_name();
	virtual void show_info();
};

