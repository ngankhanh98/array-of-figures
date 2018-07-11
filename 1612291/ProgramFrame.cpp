#include "stdafx.h"
#include "ProgramFrame.h"

using namespace std;

void ProgramFrame::StartMessenger()
{
	cout << "Welcome, entering data: ";
}

void ProgramFrame::ErrorMessenger()
{
	cout << "Input data error!" << endl;
}

bool ProgramFrame::AskToContinue()
{
	char key;
	cout << "Press 'y' to continue, others to stop...";
	cin >> key;
	return (key=='y'||key=='Y');
}

void ProgramFrame::Run()
{
	bool ToContinue = true;

	do
	{
		StartMessenger();
		Input();
		if (!ValidData())
		{
			ErrorMessenger();
			system("cls");
			continue;
		}
		Processing();
		Output();
		ToContinue = AskToContinue();
		if (ToContinue)
			system("cls");
	} while (ToContinue);
}
