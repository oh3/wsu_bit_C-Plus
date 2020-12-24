//05_생성자콜론초기화.cpp
/*
 멤버변수를 초기화 할 때 방법
 1번방식 {    } 안에 대입연산을 이용하여 초기화
 2번방식 : 콜론 초기화
 
 2번방식의 결과는 동일하다
 하지만 과정이다르다.

 1방식은 선언 후 대입연산 방식 ( int n1;  n1 = 0; )
 2방식은 선언과 동시에 초기화 방식 ( int n1 = 0; )

 단, 멤버변수중에 반드시 선언과 동시에 초기화를 필요로 하는 변수가 있다면
 콜론초기화를 사용해야 한다.
 //대표적으로 const 맴버 변수가 있다. 
*/

#include <iostream>
using namespace std;

struct Data {
	int num;
	char ch;
	const int NUM;

public:
	//콜론초기화
	//아래 기능과 같은 기능
	Data() : num(0), ch(' '), NUM(0) {
		//	num = 0;
		//	ch = ' ';
	}
	Data(int _num, char _ch)  :num(_num + _num), ch(_ch){
		//num = num + _num;
		//ch = _ch;
	}
};

int main() {
	return 0;
}