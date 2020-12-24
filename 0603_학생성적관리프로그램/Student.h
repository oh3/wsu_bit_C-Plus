//Student.h

#pragma once

class Student
{
	//1번 멤버변수만들기
private:
	const int num;
	char name[20];
	int c;
	int cpp;
	int java;
	float average;

public:
	Student(int _num, const char* _name);

	//15번 (검색)
public:
	//15.1번
	int GetNum() const { return num;  }
	const char* GetName() const { return name; }

	//2번 멤버함수 만들기
public:
	void Print() const;
	void Println() const;
	void SetJumsu(int _c, int _cpp, int _java);
};

//14번
//검색
//find_if에 사용되는 함수 객체 정의
class CompareByNumber	//비교의 대상 number
{
	int num;
public:
	//비교할 값을 생성자를 통해 전달받아 맴버변수에 저장
	CompareByNumber(int _number) : num(_number) {}

	//find_if에서 반복적으로 호출되는 부분
	//vector<Account*> 로 만들어져 있기 때문에 이때 전달되는 타입은
	bool operator()(Student* value)
	{
		return (value->GetNum() == num);
	}
};

//15번
//find_if에 사용되는 함수 객체 정의
class CompareByName	//비교의 대상 name
{
	char name[20];
public:
	//비교할 값을 생성자를 통해 전달받아 맴버변수에 저장
	CompareByName(const char* _name)
	{
		strcpy_s(name, sizeof(name), _name);
	}

	//find_if에서 반복적으로 호출되는 부분
	//vector<Account*> 로 만들어져 있기 때문에 이때 전달되는 타입은
	//함수객체.....
	bool operator()(Student* value)
	{
		return (strcmp(value->GetName(), name) == 0);
	}
};



