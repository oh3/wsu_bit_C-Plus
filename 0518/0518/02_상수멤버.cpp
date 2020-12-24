//상수 맴버
/*
상수맴버 : 반드시 콜론초기화에서 초기화
상수맴버함수 : 해당 함수내에서는 절대로 맴벼변수의 값을 수정할 수 없다.
					따라서 상수멤버함수내에서는 상수 멤버함수의 호출만 가능하다.
*/
#include <iostream>
using namespace std;

class Member {

	const int id;		//상속 멤버

	int testnumber;	//멤버 변수
public:
	Member(int _id) : id(_id) {

		testnumber = _id;
	}
public:
	void fun1() {
		//id = 10;					//error (상수)
		testnumber = 10;		//자유롭게 값을 변경할 수 있다.
	}

public:
	void fun2() {

	}
	void fun3() const {

	}

	void constfun1(int temp) const {		//상수멤버 함수

		temp++						//지역변수 수정 ok

		//testnumber++;			//error (멤버변수 수정 불가)
		
		fun2();						//(일반멤버함수)eeror
		fun3();						//(상수멤버함수)ok

	}
};

int main(){

	Member member(10);
	member.constfun1(1);
	return 0;
}
