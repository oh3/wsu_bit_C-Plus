//02_복사생성자를 만들어야하는 경우.cpp
#include <iostream>
#include <string.h>
using namespace std;

class Sample{
	char* name;
	int age;
public:
	Sample(const char* _name, int _age){
		name = new char[strlen(_name) + 1];
		strcpy_s(name, strlen(_name) + 1, _name);
		age = _age;
		cout << "Sample" << endl;
	}

	~Sample(){
		delete[] name;
		cout << "~Sample" << endl;
	}

	////내가 복사생성자를 만들수도 있다.
	Sample(const Sample& sam) {
		name = new char[strlen(sam.name) + 1];
		strcpy_s = strlen(sam.name) + 1;
		age = sam.age;

	}

public:
	void SetName(const char* value){
		strcpy_s(name, strlen(value) + 1, value);
	}
	void Print() const {  //상수맴버함수(내부에서 맴버변수를 수정않겠다)
		cout << name << ", " << age << endl;
	}
};

int main(){
	Sample sam1("홍길동", 10);
	Sample sam2(sam1);	//sam2가 생성될 때 과연 어떤 생성자를 호출시켰을까?[복사생성자]

	sam1.Print();		//홍길동, 10
	sam2.Print();		//홍길동, 10 

	sam1.SetName("이길동");

	sam1.Print();		//이길동, 10
	sam2.Print();		//홍길동, 10 

	return 0;
}