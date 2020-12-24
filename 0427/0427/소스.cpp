// 소스.cpp

/* C언어에서 사용했던 코드들을 C++에서 사용할 수 있다.
#include <stdio.h>

int main() {
	printf("Hello World'\n");

	return 0;
}
*/

/*C++의 문법을 활용해서 코딩
#include <iostream>		//C++기본 h 파일
									//미리 제공되는 라이브러리 .h일 경우 .h를 생략
									//사용자가 정의한 h는 .h를 붙여야 함.


int main() {

	std::cout << "Hello World \n ";
	std::cout << "Hello World << endl";		//권장방법

	//endl : 개행처리

	return 0;
}
*/

/* 개선 2
#include <iostream>

using std::cout;
using std::endl;

int main() {

	std::cout << "Hello World \n ";
	std::cout << "Hello World << endl";		//권장방법

	//endl : 개행처리

	return 0;
}
*/

//최종 개선 된 C++ 패턴
#include <iostream>
using namespace std; // 무조건 std 라는 공간의 있는 것을 쓸꺼야.

int main() {

	cout << "Hello World \n ";
	cout << "Hello World << endl";		//권장방법

	//endl : 개행처리

	return 0;
}
