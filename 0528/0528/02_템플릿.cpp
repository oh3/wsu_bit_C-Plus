//02_템플릿
/*
템플릿 : 무언가(함수,클래스)를 만드는 틀
*/
#include <iostream>
using namespace std;

//다양한 타입을 비교할 수 있는 동일한 이름의 함수를 만들고 싶다.

//1번 오버로딩
/*
int mycompare(int n1, int n2) {
	return n1 - n2;
}
int mycompare(char n1, char n2) {
	return n1 - n2;
}
int mycompare(double n1, double n2) {
	return n1 - n2;
}
*/

//2번 함수템플릿 == 함수를 만들 수 있는 틀
// 컴파일러가 제공되는 틀을 이용해서 함수를 만들어 줌.
/*
template<typename T>
int mycompare(T n1, T n2) {
	return n1 - n2;
}

int main() {

	cout << mycompare(20, 10) << endl;		//양수, 0, 음수
	cout << mycompare('A', 'C') << endl;		//양수, 0, 음수
	cout << mycompare(10.2, 20.1) << endl;		//양수, 0, 음수

	return 0;
}

*/

//템플릿 함수 활용
template <typename T>
//비교
T max(T n1, T n2) {
	return (n1 > n2 ? n1 : n2);
}

int main() {

	//템플릿 함수
	//1. 암시적
	cout << max(10, 20) << endl;

	//2. 명시적 ( 표준 ) 
	cout << max<char>('a', 'b') << endl;

	return 0;
}


