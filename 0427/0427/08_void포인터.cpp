//08_void 포인터 : C언어와 동일한 문법
#include <iostream>
using namespace std;

/*
1. 모든 타입의 주소를 저장할 수 있다.
2. void* 사용시에는 반드시 원래의 타입으로 형변환해서 사용해야한다.
*/

int main() {

	int num1 = 10;
	char ch = 'a';

	int* p1 = &num1;	//int* p2 = &ch; error
	
	//1번문법
	void* vf;
	vf = &num1;
	vf = &ch;

	//2번문법
	cout << *(char*)vf << endl; //'a'

	vf = &num1;
	*(int*)vf = 20;

	cout << *(int*)vf << endl;		//20

	return 0;
}