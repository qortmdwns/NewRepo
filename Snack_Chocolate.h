#pragma once
#include "star.h"

class Chocolate : public Snack
{
public:
	Chocolate() {}
	Chocolate(string shape)
	{
		_shape = shape;
	}
public:
	string _shape;

};
