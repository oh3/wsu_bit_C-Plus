//06_상속관계에서 객체생성.cpp

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

//Parent 상속받음
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