#include "stdafx.h"
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle()
{
	
	mL1 = rand() % 100;
	mL2 = rand() % 100;
	countRec++;
}


//Rectangle::~Rectangle()
//{
//	countRec = 0;
//}

void Rectangle::ToString()
{
	cout << "Rectangle (" << mL1 << "," << mL2 << ")" << endl;
}
int Rectangle::countRec = 0;