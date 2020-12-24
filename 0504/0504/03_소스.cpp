/************************************************************
 function overloading
 -> 아래 코드가 정상적으로 동작할 수 있도록 함수 오버로딩을
	이용하여 구현하시오.
	출력 결과는 주석과 같이
*************************************************************/

#include <iostream>
using namespace std;

int foo(int n1) {
	return n1;
}

int foo(int n1, int n2) {
	return n1+n2;
}

int foo(int n1, int n2, int n3) {
	return n1+n2+n3;
}

int foo(int n1, int n2, int n3, int n4) {
	return n1+n2+n3+n4;
}


int main(){
	foo(10, 20, 30, 40);	// 10 : 20 : 30 : 40 
	foo(10, 20, 30);		// 10 : 20 : 30
	foo(10, 20);			// 10 : 20
	foo(10);				// 10 

	cout << "foo 10 : " << foo(10) << endl;
	cout << "foo 20 : " << foo(10,20) << endl;
	cout << "foo 30 : " << foo(10,20,30)<< endl;
	cout << "foo 40 : " << foo(10,20,30,40) << endl;

	return 0;
}

