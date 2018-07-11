#pragma once
#include<iostream>
#include<vector>
#include<ctime>

using namespace std;

class Shape
{
	
public:
	Shape() {};
	//~Shape() {};

	virtual void SetCount() = 0;
	virtual int GetID() = 0;
	virtual int GetCount() = 0;
	virtual void ToString() = 0;
};

