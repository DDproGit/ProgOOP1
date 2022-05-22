#include "Tetrahedron.h"
#include <cmath>
void Tetrahedron::InData(ifstream& ifst)
{
	ifst >> a;
}
void Tetrahedron::Out(ofstream& ofst)
{
	ofst << "It is Tetrahedron: a = " << a;
}
float Tetrahedron::Volume()
{
	return (a * a * a) * (sqrt(2) / 12);
}
void Tetrahedron::MultiMethod(Shape* other, ofstream& ofst)
{
	other->MMTet(ofst);
}
void Tetrahedron::MMBall(ofstream& ofst)
{
	ofst << "One ball and one tetrahedron" << endl;	
}
void Tetrahedron::MMParal(ofstream& ofst)
{
	ofst << "First is a parallelepiped, second is a tetrahedron" << endl;
}
void Tetrahedron::MMTet(ofstream& ofst)
{
	ofst << "2 tetrahedrons" << endl;
}