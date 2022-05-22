#include "Ball.h"
//using namespace std;
void Ball::InData(ifstream& ifst)
{
	ifst >> r;
}
void Ball::Out(ofstream& ofst)
{
	ofst << "It is Ball: r = " <<r;
}
void Ball::OutBalls(ofstream& ofst)
{
	Out(ofst);
}
bool Ball::CheckBalls()
{
	return true;
}
float Ball::Volume()
{
	float pi = 3.14;
	return (4 / 3) * pi * this->r * this->r;
}
}
void Ball::MultiMethod(Shape* other, ofstream& ofst)
{
	other->MMBall(ofst);
}
void Ball::MMBall(ofstream& ofst)
{
	ofst << "Two balls" << endl;
}
void Ball::MMParal(ofstream& ofst)
{
	ofst << "First is a parallelepiped, second is a ball" << endl;
}