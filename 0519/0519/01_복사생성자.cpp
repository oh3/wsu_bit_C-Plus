//01_복사생성자.cpp
/*
자신과 동일한 객체를 이용해 생성할 때 호출되는 특별한 형태의 생성자
특수한 형태의 생성자
- 다른 생성자와는 달리 컴파일러가 기본적으로 지원해주는 생성자
- 실제 전달된 객체의 정보를 복사해서 새로운 객체를 생성해주는역할을 수행
*/
#include <iostream>
using namespace std;

class Sample {

	//string name;
	char name[20];
	int age;

public:
	Sample(const char* _name, int _age){
		strcpy_s(name, sizeof(name), _name);
		age = _age;
		cout << "Sample" << endl;
	}

	//내가 복사생성자를 만들수도 있다.
	Sample(const Sample& sam) {

		cout << "복사생성자" << endl;
		//strcpy_s(name, sizeof(name), sam.name);
		//age= sam.age;

		// < - > 같은 기능을함

		*this = sam;		//구조체 변수끼리 대입연산 가능하다.
								//this는 자기 자신의 주소값을 갖고 있는 포인터
	}

	~Sample() { cout << "~Sample " << endl; }


public:
	void Print() const { // 상수멤버함수(내부에서 멤버변수를 수정하지 않겟다)
		cout << name << ", " << age << endl;
	}




};



int main() {

	Sample sam1("홍길동",10);
	Sample sam2(sam1);			//sam2가 생성될 때 과연 어떤 생성자를 호출시켰을까?[복사생성자]

	sam1.Print();
	sam2.Print();

	return 0;
}