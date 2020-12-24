//student.cpp
#include <iostream>
using namespace std;
#include "Student.h"

//3��
//�����ڿ��� : �ɹ������� �ʱ�ȭ 
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
	cout << "��       �� : " << num << endl;
	cout << "��       �� : " << name << endl;
	cout << "C�������   : " << c << endl;
	cout << "C++������� : " << cpp << endl;
	cout << "Java�������: " << java << endl;
	cout << "��       �� : " << average << endl;
}

void Student::SetJumsu(int _c, int _cpp, int _java)
{
	c = _c;
	cpp = _cpp;
	java = _java;
	average = (c + cpp + java) / 3.0f;
}

