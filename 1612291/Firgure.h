#pragma once
#include"Shape.h"
#include "ProgramFrame.h"



class Firgure :
	public ProgramFrame
{
	static int mSize;
	vector<Shape*>mpShape;

public:

	void Input();
	bool ValidData();
	void Processing();
	void Output();

};

