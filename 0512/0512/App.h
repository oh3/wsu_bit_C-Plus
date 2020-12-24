//App.h

#pragma once
#include "Control.h"

class App{
private:
	Control* con;

public:
	App();
	~App();

public:
	void InitInstance();
	void Run();
	void ExitInstance();

private:
	void Logo();
	char MenuPrint();
	void Ending();
};

