//03 this ������.cpp
#include <iostream>
using namespace std;


class Sample{
	//this  :  �ڱ� �ڽ��� ���� ������ ������
public:
	void Test(){
		cout << this << endl;	//this�� ���
	}
};

int main(){
	Sample sam;
	cout << &sam << endl;
	sam.Test();
	return 0;
}
