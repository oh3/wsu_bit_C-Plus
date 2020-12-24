//05_함수의 기본값
/*
함수를 만들 때 매개변수에 미리 값을 정해놓음.
기본값을 갖는 함수를 호출할 때 만약 값이 전달 안되면 기본값이 사용된다.
*/
#include <iostream>
using namespace std;

int add(int n1, int n2, int n3 = 0, int n4 = 0) {

	return n1 + n2 + n3 + n4;
}


int main() {
	
	cout << add(10, 20) << endl; // 10 20 0 0 연산됨.
	cout << add(10, 20, 30) << endl; // 10 20 30 0 
	cout << add(10, 20, 30, 40) << endl; // 10 20 30 40

	return 0;
}