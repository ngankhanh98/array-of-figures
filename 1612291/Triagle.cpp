#include "stdafx.h"
#include "Triagle.h"

using namespace std;

Triagle::Triagle()
{
	int a, b, c;
	// kiểm tra tam giác hợp lệ
	do
	{
		a = rand() % 100;
		b = rand() % 100;
		c = rand() % 100;
	} while (!(abs(a - b) < c&&c < a + b));

	mL1 = a, mL2 = b, mL3 = c;
	countTri++;
}


//Triagle::~Triagle()
//{
//	countTri = 0;
//}

void Triagle::ToString()
{
	cout << "Triagle (" << mL1 << "," << mL2 << "," << mL3 << ")" << endl;
}
int Triagle::countTri = 0;
