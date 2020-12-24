//11_캡슐화
/*
캡술화 : 데이터와 함수를 하나로 묶는것
데이터와 함수를 서로 관련이 있을 때 하나로 묶는다.
*/

#include <iostream>
using namespace std;

//Step1) C언어의 구조체 : 구조체 안에 멤버로 데이터만 둘 수 있다.

struct wbtime
{
	int hour;
	int min;
	int second;
};

void printtime(wbtime t){
	cout << t.hour << ":" << t.min << ":" << t.second << endl;
}

void currenttime(wbtime* t){
	t->hour = 21;
	t->min = 3;
	t->second = 35;
}

void changemintime(wbtime* t, int min){
	t->min = min;
}

int main() {
	
	wbtime t1;
	currenttime(&t1);
	printtime(t1);
	changemintime(&t1, 6);
	printtime(t1);

	return 0;
}