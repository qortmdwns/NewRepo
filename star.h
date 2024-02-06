#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Snack
{
public:
	Snack(){}
	static int snack_count()
	{
		return _snack_count;
	}
	static void snack_num_plus()
	{
		_snack_count++;
	}
public:
	static int _snack_count;

};

int Snack::_snack_count = 0;