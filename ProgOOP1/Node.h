#pragma once
#include "Shape.h"
using namespace std;
class Node
{
public:
	Shape* sp;
	Node* next;
	Node(Shape* sp=NULL, Node* next = NULL);
};

