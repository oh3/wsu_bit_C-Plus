//03 this 포인터.cpp
#include <iostream>
using namespace std;


class Sample{
	//this  :  자기 자신의 값을 가지는 포인터
public:
	void Test(){
		cout << this << endl;	//this를 출력
	}
};

int main(){
	Sample sam;
	cout << &sam << endl;
	sam.Test();
	return 0;
}
