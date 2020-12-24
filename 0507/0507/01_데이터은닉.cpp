//01_데이터은닉.cpp
#include <iostream>
using namespace std;

/*
멤버변수를 외부에서 접근을 허용시키면 멤버변수가 불안정해진다.
이 문제를 해결하기 위해 반드시 멤버변수는 은닉시킨다.
이것을 데이터 은닉이라고 한다.
*/

//캡슐화
struct bycle {

	int gear;		//멤버 변수 : 1- 20단

	//바이클 기어
	void charneGear(int g) {	//멤버함수

		//함수에서 비정상적인 값을 처리를 막는 방법
		//이 if를 통해서 불안정한 값을 막는 로직을 짤 수 있다.
		if (g >= 1 && g <= 20) {
			gear = g;
		}

		gear = g;

	}

	//바이클 기어 출력함수
	void printGear() {

		cout << "현재 기어 상태 " << gear << "단" << endl;

	}
};

int main() {

	//바이클의 기어 설정
	bycle by1 = { 5 };
	bycle by2 = { 3 };

	//바이클 기어 출력
	by1.printGear();
	by2.printGear();
	
	//바이클 기어 변경
	by1.charneGear(8);
	by2.charneGear(10);

	//멤버변수에 맘대로 접근해서 값을 바꿀 수 있음.
	//멤버 변수를 외부에서 접근 허용을 못하게 해야함.
	//변수 직접 접근과 함수 직접 접근은 다르다.
	//변수가 노출되면 데이터가 불안정해진다.
	by1.gear = 100;
	by2.gear = -10;

	//바이클 기어 출력
	by1.printGear();
	by2.printGear();



	return 0;
}