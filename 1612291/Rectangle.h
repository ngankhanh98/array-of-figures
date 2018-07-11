#pragma once
#include "Shape.h"
class Rectangle :
	public Shape
{
	int mL1, mL2;
public:
	static int countRec;
	static const int ID = 2;

	Rectangle();
	//~Rectangle();

	void SetCount() { countRec = 0; }
	int GetID() { return ID; }
	int GetCount() { return countRec; }
	void ToString();
};

