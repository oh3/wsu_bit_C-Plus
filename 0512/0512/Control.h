//controll.h

#pragma once
#include "Member.h"

#define DATAMAX 10

class Control{
	Member* memlist[DATAMAX];

public:
	Control();
public:
	void SelectAll();
	void Insert();
	void Select();
private:
	int NumberToIdx(int number);
	int NameToIdx(const char* name);
};



