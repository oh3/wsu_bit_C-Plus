//02_멤버접근지정자.cpp
/*
필요에 의해서 멤버를 외부로 노출 및 은닉 시킬 수 있다.
public : 외부에서 접근을 허용하는 지정자

protected :

private : 외부에서 접근을 금지 하는 지정자
*/


#include <iostream>
using namespace std;

/*
//구조체는 기본 접근 지정자가 public이다.
struct Sample{

	int num;

	void foo(){}
	void woo(){}
	
};

//멤버접근지정자 사용법
struct Sample1 {

private:
	int num;

public:
	void foo() {}
	void woo() {}

private:
	void hoo() {}
	void zoo() {}

};

int main() {

	Sample sam1;
	
	//외부에서 접근을 허용하는 구조
	sam1.num;
	sam1.foo();
	sam1.woo();

//====================================
	Sample1 sam2;

	//sam2.num; 멤버변수에 접근이 안됨.
	sam2.foo();
	sam2.woo();


	return 0;
}
*/

//간단한 문제

//1.Sample이라는 이름의 구조체를 정의
struct Sample {

	//2. int num1 멤버변수 추가하고, 단 외부접근 허용불가설정.
private:
	int num1;

	//3. void test1() 멤버함수를 추가하고, 외부접근 허용 불가
private:
	void test1() {
	
	}

	//4. void test2() 멤버함수를 추가하고, 외부접근을 허용 설정
public:
	void test2() {
	
	}
};

int main() {

	//Sample 구조체가져와서 이름선언.
	Sample sam1;

	//꺼내옴
	sam1.test2();
}