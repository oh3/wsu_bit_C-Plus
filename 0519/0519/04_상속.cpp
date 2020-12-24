//04_상속.cpp
/*
1. 부모의 멤버변수와 멤버함수는 자식에게 상속된다.
*/
#include <iostream>
using namespace std;

class Parent						//부모, 기반 클래스
{
	int num1;
public:
	void fun1() { cout << "fun1" << endl; }
};

//부모와 자식간에 상속이 만들어진다.
class Child : public Parent			//자식, 파생 클래스 
{
	int num2;
public:
	void fun2() { cout << "fun2" << endl; }
};


int main() {
	
	cout << sizeof(Parent) << endl;
	cout << sizeof(Child) << endl;

	Parent p1;
	p1.fun1();

	Child c1;
	c1.fun1();	// <- 부모로 부터 물려받음.
	c1.fun2();	
}