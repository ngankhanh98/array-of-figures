#pragma once
#include "Shape.h"
class Triagle :
	public Shape
{
	int mL1, mL2, mL3;
public:
	static int countTri;
	static int const ID = 1;

	Triagle();
	//~Triagle();

	void SetCount() { countTri = 0; }
	int GetID() { return ID; }
	int GetCount() { return countTri; }
	void ToString();
};
