#include "stdafx.h"
#include "Firgure.h"
#include"Circle.h"
#include"Shape.h"
#include"Rectangle.h"
#include"Triagle.h"
#include<string>

using namespace std;

int n;

void Firgure::Input()
{
	cin >> n;
}

bool Firgure::ValidData()
{
	return (0 < n&&n < 20);
}

void Firgure::Processing()
{
	mSize = n;

	for (int i = 0; i < mSize; i++)
	{
		int type = rand() % 3;
		if (type == 0)
			mpShape.push_back(new Circle);
		else if (type == 1)
			mpShape.push_back(new Triagle);
		else
			mpShape.push_back(new Rectangle);
	}
}

void Firgure::Output()
{
	for (int i = 0; i < mpShape.size(); i++)
		mpShape[i]->ToString();

	cout << "-------------------------------------------------" << endl;
	int countCir = 0, countTri = 0, countRec = 0;
	int i = 0;

	while (i < mpShape.size() && (countCir == 0 || countTri == 0 || countRec == 0))
	{
		if (mpShape[i]->GetID() == 0)
			countCir = mpShape[i]->GetCount();
		else if (mpShape[i]->GetID() == 1)
			countTri = mpShape[i]->GetCount();
		else
			countRec = mpShape[i]->GetCount();
		i++;
	}

	string cir = "circles", tri = "triagles", rec = "rectangles";

	if (countCir == 0)
		cir[0] = '\0';
	else if (countCir == 1)
		cir[cir.size() - 1] = '\0';

	if (countTri == 0)
		tri[0] = '\0';
	else if (countTri == 1)
		tri[tri.size() - 1] = '\0';

	if (countRec == 0)
		rec[0] = '\0';
	else if (countRec == 1)
		rec[rec.size() - 1] = '\0';

	if (countCir == 0 && countRec == 0 && countTri == 0)
	{
		cout << "There's nothing" << endl;
		return;
	}

	cout << "There're ";
	if (countCir)
		cout << countCir << " " << cir;
	if (countTri)
		cout << (countCir ? ", " : " ") << countTri << " " << tri;
	if (countRec)
		cout << (countCir || countTri ? ", " : " ") << countRec << " " << rec;

	cout << endl;
	
	
	for (int i = mpShape.size() - 1; i >= 0; i--)
	{
		mpShape[i]->SetCount();
		mpShape.erase(mpShape.begin() + i);
	}
}

int Firgure::mSize = 0;