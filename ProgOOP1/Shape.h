#pragma once
#include <fstream>
//#include"Ball.h"
//#include "Parallelepiped.h"
using namespace std;
class Shape
{
	float density;
	int meltingPoint;
public:
	Shape() { density = -1; meltingPoint = -1; };
	~Shape() {};
	float GetDensity();
	int GetMeltingPoint();
	static Shape* InShape(ifstream& ifst);
	virtual void InData(ifstream& ifst) = 0; // ввод
	virtual void Out(ofstream& ofst) = 0; // вывод
	virtual void MultiMethod(Shape* other, ofstream& ofst) = 0;
	virtual void MMBall(ofstream& ofst) = 0;
	virtual void MMParal(ofstream& ofst) = 0;
	virtual void MMTet(ofstream& ofst) = 0;
	virtual float Volume() = 0;
	bool Compare(Shape* second);
	virtual void OutBalls(ofstream& ofst) {};
	virtual bool CheckBalls() { return false; };
};

