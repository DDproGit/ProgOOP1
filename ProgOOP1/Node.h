#pragma once
#include "Shape.h"
using namespace std;
class Node
{
	Shape* sp;
	Node* next;
public:
	Shape* GetSp();
	Node* GetNext();
	void ChangeNext(Node* newNode);
	Node(Shape* sp=NULL, Node* next = NULL);
};

