//07_최종코드
#include <iostream>
using namespace std;

//객체지향 프로그램에서는 객체를 정의 : class 키워드를 가지고 정의.
//struct --> class
//public     private
//-----------------------------------------------
class Student{
	//1. 맴버 변수를 정의한다.
private:
	char name[20];
	int  number;
	char subject[20];
	char gender;

	//2. 생성자 & 소멸자를 구현한다.
public:
	Student(const char* _name, int _number, const char* _subj, char _gender){
		strcpy_s(name, sizeof(name), _name);
		number = _number;
		strcpy_s(subject, sizeof(subject), _subj);
		gender = _gender;
	}
	~Student()
	{
	}

	//맴버 함수
public:
	void Print(){
		cout << "이름 : " << name << endl;
		cout << "학번 : " << number << endl;
		cout << "학과 : " << subject << endl;
		cout << "성별 : " << gender << endl;
	}

};

int main(){
	//스택에 객체를 생성
	Student stu("홍길동", 1111, "컴퓨터", 'm');
	stu.Print();

	//힙에 객체를 생성
	Student* pstu = new Student("홍길순", 2222, "IT", 'f');
	pstu->Print();
	delete pstu;

	return 0;
}