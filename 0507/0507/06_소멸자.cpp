//06_소멸자
/*
객체가 소멸될때 자동으로 호출
리턴타입이 없다. 이름은 *구조체명, 매개변수가 없다.
*/

#include <iostream>
using namespace std;

struct Data
{
public:
	Data() { cout << "Data()" << endl; }	
	Data(int n) { cout << "Data(int)" << endl; }
	~Data() { cout << "~Data()" << endl; }
};

int main() {
	//Data n1;		//main스택메모리에 생성, main 함수가 종료될 때 
	//Data n2[5];	//5개, 1번 
	//Data n3(3);		//1개, 2번
	//Data n5[5] = { Data(10)};// 5, {2,3,1,1,1}

	//============================================
	Data* n6;						//  0
	n6 = new Data(10);			//Data 객체를  힙메모리에 생성

	delete n6;						//n6 주소를 갖고 있으며, 해당 주소에 생성된 객체 소멸

	

	return 0;
}