/************************************************************
  01. 아래 코드가 실행될 수 있는 클래스 구현 
      Human 클래스 : 이름을 가지고 있다.
      Student클래스 : Human을 상속받는다. 
                            학번을 가지고 있다.
*************************************************************/
#include <iostream>
using namespace std;

//Human 클래스
class Human {
	
//멤버변수
public:
	char name[20];

//Human 클래스의 생성자
public:
	Human() {

	}

	Human(const char* _name) {
		strcpy_s(name, sizeof(name), _name);
	}

//출력
public:
	void Intro() {
		cout << name << endl;
	}
};


class Student : public Human {
public:
	char name[20]; //이름
	int number; // 학번

public:
	Student(const char* _name, int _number) {
		strcpy_s(name, sizeof(name), _name);
		number = _number;
	}

public:
	void Intro() {
		cout << name << "\t";
		cout << number << endl;
	}
};

//메인
int main() {

	Human H("김사람");
	Student S("이학생", 1234567);

	Human* pH;
	Student* pS;

	pH = &H;
	pS = &S;

	pH->Intro();		// 개인 정보 출력
	pS->Intro();		// 개인 정보 출력

	return 0;
}