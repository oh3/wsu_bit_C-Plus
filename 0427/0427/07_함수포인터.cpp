//07_함수포인터 : C와 동일한 문법
#include <iostream>
using namespace std;

//함수의 이름을 출력해보자. ==> 함수의 이름은 주소값을 반환한다.
void exam1() {

	cout << exam1 << endl;

}

//-------------------------------------------
void foo(int n1) {
	cout << n1 << endl;
}
int goo() {
	cout << "goo" << endl;
	return 10;
}
int add(int n1, int n2) {
	return n1 + n2;
}

void exam2() {

	int (*f3)(int, int);
	f3 = add;
	cout << f3(10, 20) << endl;

	int(*f2)() = goo;
	f2();		//goo();

	void (*f1)(int);		//f1 포인터변수 : 리턴타입이 void, 매개변수가 int 함수포인터
	f1 = foo;
	foo(10);		//함수의 호출 : 해당 주소로 이동해라..
	f1(10);
}

//=========================================
//활용 1 : 함수의 인자 전달

float add3(int n1, int n2) {
	return(float)n1 + n2;
}
float sub3(int n1, int n2) {
	return (float)n1 - n2;
}
float mul3(int n1, int n3) {
	return (float)n1 * n3;
}
float div3(int n1, int n3) {
	return (float)n1 / n3;
}

float cal(int num1, int num2, float(*fun)(int, int)) {
	return fun(num1, num2);
}

void exam3() {

	float value = cal(10, 20, add3);		//30

	cout << value << endl;

	cout << cal(10, 20, mul3) << endl;

}
//================================
//함수포인터와 typedef(기존 타입명과 동일한 새로운 타입명을 만드는 것)
typedef unsigned int unit;

typedef int(*FUN)(int, int);

int max4(int n1, int n2) {
	//만족하면 반환 n1 or n2가 반환됨
	return n1 > n2 ? n1 : n2;
}

void exam4() {

	FUN fun2 = max4;
	cout << fun2(10, 20) << endl;
	
	int(*fun1)(int, int);
	fun1 = max4;
	cout << fun1(20, 40) << endl;

	unsigned int num1 = 10;
	unit num2 = 20;
}

int main() {
	
	exam4();

	return 0;
}