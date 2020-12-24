//05_상속에서멤버접근.cpp

//2. 접근지정자의 개념
/*

				자신접근	자식접근		모두접근
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
private		:    ㅇ	(자기만 가능)
protected	:    ㅇ			ㅇ		(자식만 가능)
public		:	 ㅇ			ㅇ					ㅇ		(모두 가능)
*/
#include <iostream>
using namespace std;

class Parent {						//부모, 기반 클래스

private:
	int num1;

protected:
	int num11;

public:
	void fun1() { cout << "fun1" << endl; }

};

class Child : public Parent {			//자식, 파생 클래스

	int num2;

public:
	void fun2() {
//		num1;		//error 부모로 부터 물려받은 private 멤버변수
		num11;		//부모로부터 물려받은 protected 멤버 변수
		fun1();		//부모로 부터 물려받은 public 멤버 변수

		cout << "fun2" << endl;
	
	}
};

int main(){

	return 0;
}