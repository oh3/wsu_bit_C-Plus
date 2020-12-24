//start.cpp

#include <iostream>
using namespace std;
#include "App.h"
//C++코드에서 유일한 전역 함수
int main(){

	App app;
	app.InitInstance();
	app.Run();
	app.ExitInstance();

	return 0;
}
