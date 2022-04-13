#pragma once
#include "Shape.h"
class Parallelepiped :public Shape
{
	int a, b, c;
public:
	void InData(ifstream& ifst);
	void Out(ofstream& ofst);
};

