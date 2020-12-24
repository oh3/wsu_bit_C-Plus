//01_기본입출력.cpp

/*
cout << "Hello World" << endl;


1) cout : 출력 객체(콘솔화면에 출력을 수행하는 역할)
2)  <<  : 출력 연산자(출력 객체를 이용하여  화면에 정보를 출력할때 사용되는 연산자)
3) endl : "\n" + fflush(stdout) 2가지 기능을 제공하는 함수

입력객체 : cin,	입력연산자 : >> 

*/

#include <iostream>
using namespace std;

int main() {

	char name[20];
	int age;
	char gender;
	float weight;

	//사용자 입력을 통한 초가화
	cout << "이름 : "; 			cin >> name;
	cout << "나이 : ";			cin >> age;
	cout << "성별(m/f)";		cin >> gender;
	cout << " 몸무게 : ";		cin >> weight;

	//출력
	cout << "이름 : " << name << endl;
	cout << "나이 : " << age << endl;
	cout << "성별 : " << gender << endl;
	cout << "몸무게" << weight << endl;
	
	return 0;
}

#include <iostream>

namespace aaa {

	void foo() { cout << "aaa::foo()" << endl; }

}

int main() {

	aaa::foo();

	foo();

	return 0;

}
