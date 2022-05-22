#pragma once
#include "Shape.h"
class Tetrahedron : public Shape
{
	int a;
public:
	Tetrahedron() { a = -1; };
	~Tetrahedron() {};
	void InData(ifstream& ifst);
	void Out(ofstream& ofst);
	float Volume();
	void MultiMethod(Shape* other, ofstream& ofst);
	void MMBall(ofstream& ofst);
	void MMParal(ofstream& ofst);
	void MMTet(ofstream& ofst);
};

