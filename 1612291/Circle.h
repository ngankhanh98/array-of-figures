#pragma once
#include "Shape.h"

class Circle :
	public Shape
{
	int mR;		// bán kính

public:
	static int countCir;
	static const int ID = 0;
	Circle();
	//~Circle();

	void SetCount() { countCir = 0; }
	int GetID() { return ID; };
	int GetCount() { return countCir; };
	void ToString();
};

