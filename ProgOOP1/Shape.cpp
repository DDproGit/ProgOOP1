#include "Shape.h"
#include"Ball.h"
#include "Parallelepiped.h"
Shape* Shape::InShape(ifstream& ifst)
{
	Shape* sp;
	int k;
	ifst >> k;
	switch (k) {
	case 1:
		sp = new Ball;
		break;
	case 2:
		sp = new Parallelepiped;
		break;
	default:
		return 0;
	}
	ifst >> sp->density;
	sp->InData(ifst);
	return sp;
}