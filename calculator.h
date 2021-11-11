#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

#include <iostream>
using namespace std;

class calculator
{
public:
	calculator()
	{}
	float add(float x1, float x2)
	{
		return x1 + x2;
	}
	float minus(float x1, float x2)
	{
		return x1 - x2;
	}
};

#endif 
