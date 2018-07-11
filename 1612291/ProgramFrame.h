#pragma once
#include<iostream>


class ProgramFrame
{
protected:
	virtual void StartMessenger();
	virtual void Input() = 0;
	virtual bool ValidData() = 0;
	virtual void ErrorMessenger();
	virtual void Output() = 0;
	virtual void Processing() {};
	virtual bool AskToContinue();
public:
	void Run();
};

