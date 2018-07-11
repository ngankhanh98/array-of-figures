#include "stdafx.h"
#include "Circle.h"

using namespace std;

Circle::Circle()
{
	
	mR = rand() % 100;
	countCir++;
}


//Circle::~Circle()
//{
//	countCir = 0;
//}

void Circle::ToString()
{
	cout << "Circle (" << mR << ")" << endl;
}
int Circle::countCir = 0;