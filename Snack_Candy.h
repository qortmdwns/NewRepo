#pragma once
#include "star.h"

class Candy : public Snack
{
public:
	Candy() {}
	Candy(string taste)
	{
		_taste = taste;
	}
public:
	string _taste;

};

