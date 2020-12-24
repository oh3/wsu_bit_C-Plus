//11_캡슐화2
#include <iostream>
using namespace std;

//Step2) C++언어의 구조체 : 구조체안에 멤버로 데이터+ 함수를 둘 수 있다.
//			==> 활용해서 캡슐화를 구현할 수 있다.

struct wbtime{
	int hour;
	int min;
	int second;

	void printtime() {
		cout << hour << ":" << min << ":" << second << endl;
	}

	void currenttime() {
		hour = 21;
		min = 3;
		second = 35;
	}

	void changemintime(int _min) {
		min = _min;
	}
};

int main() {

	wbtime t1;
	t1.currenttime();		 //currenttime(&t1);
	t1.printtime();
	t1.changemintime(6);
	t1.printtime();

	return 0;
}