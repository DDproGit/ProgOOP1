#pragma once
#include <fstream>
//#include"Ball.h"
//#include "Parallelepiped.h"
using namespace std;
class Shape
{
	float density;
public:
	float GetDensity();
	static Shape* InShape(ifstream& ifst);
	virtual void InData(ifstream& ifst) = 0; // ввод
	virtual void Out(ofstream& ofst) = 0; // вывод
};

