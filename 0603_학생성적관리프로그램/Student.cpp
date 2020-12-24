//student.cpp
#include <iostream>
using namespace std;
#include "Student.h"

//3번
//생성자역할 : 맴버변수의 초기화 
Student::Student(int _num, const char* _name)
	:num(_num), c(0), cpp(0), java(0), average(0.0f)
{
	strcpy_s(name, sizeof(name), _name);
}

void Student::Print() const
{
	cout << num << ", "; 
	cout << name << ", ";
	cout << c << ", " << cpp << ", " << java << ", " << average << endl;
}

void Student::Println() const
{
	cout << "학       번 : " << num << endl;
	cout << "이       름 : " << name << endl;
	cout << "C언어점수   : " << c << endl;
	cout << "C++언어점수 : " << cpp << endl;
	cout << "Java언어점수: " << java << endl;
	cout << "평       균 : " << average << endl;
}

void Student::SetJumsu(int _c, int _cpp, int _java)
{
	c = _c;
	cpp = _cpp;
	java = _java;
	average = (c + cpp + java) / 3.0f;
}

