//06_��Ӱ��迡�� ��ü����.cpp

#include <iostream>
using namespace std;

class Parent {
public:
	Parent() {
		cout << "Parent" << endl;
	}
	~Parent() {
		cout << "~Parent" << endl;
	}
};

//Parent ��ӹ���
class Child : public Parent{
public:
	Child() { 
		cout << "Child" << endl;
	}
	~Child() {
		cout << "~Child" << endl;
	}

};

int main() {

	return 0;
}