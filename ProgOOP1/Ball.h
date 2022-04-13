#pragma once
#include "Shape.h"
class Ball : public Shape
{
	int r;
public:
	void InData(ifstream& ifst);
	void Out(ofstream& ofst);
};

