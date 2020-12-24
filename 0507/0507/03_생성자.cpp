//03_생성자.cpp
/*
객체 생성시 멤버 변수를 초기화 하기 위한 목적을 갖는 특별한 함수이다.

객체 생성시 자동으로 호출된다.

*/
#include <iostream>
using namespace std;

/*
struct Sample {

private:
	int num1;
	int num2;
	int result;

public:
	void Add() { 
		result = num1 + num2;
	}
	void Sub() { 
		result = num1 - num2; 
	}
	void Print() { 
		cout << num1 << " + " << num2 << " = " << result; 
	}

};

int main() {

	//전통적인 구조에서 생성과 동시에 초기화 문법은 더이상
	//사용 불가능 왜? 데이터가 외부에서 접근 할 수 없도록 은닉되었기 때문이다.
	//대안? 생성자 

	//생성과 동시에 초기화 문법
	Sample sam = {10, 20};

	//연산 후 연산의 결과 출력
	sam.Add();
	sam.Print();

	return 0;
}
*/

//생성자는 객체 생성시 자동으로 호출된다.
//생성자의 목적은 객체 초기화.
//생성자는 리턴타입이 없다. 이름은 구조체명과 동일해야 한다.  매개변수는 존재한다.
//- 오버로딩(이름은 같지만 매개변수가 다름), 기본값 
struct Sample {

	int num1;
	int num2;
public:
	//생성자1
	Sample() {
		num1 = 0;
		num2 = 0;
		cout << "생성자()" << endl;
	}
	//생성자2 (sample 오버로딩)
	Sample(int n1, int n2) {
		num1 = n1;
		num2 = n2;
		cout << "생성자(int,int)" << endl;
	}
	void Print(){
		cout << num1 << ", " << num2 << endl;
	}

};


int main() {
	
	Sample sam1;					//객체 생성

	Sample sam2(10, 20);		//객체 생성

	sam1.Print();
	sam2.Print();

	cout << sizeof(sam1) << endl;		// 8

	return 0;
}