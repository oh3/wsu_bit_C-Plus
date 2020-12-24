//Member.cpp
#include "Member.h"
#include <iostream>
using namespace std;

Member::Member(int _number, const char*_name, char _gender, const char*_phone){
	number = _number;
	strcpy_s(name, sizeof(name), _name);
	gender = _gender;
	strcpy_s(phone, sizeof(phone), _phone);

}

//�Լ������
void Member::Print(){
	cout << number << "\t";
	cout << name << "\t";
	cout << (gender == 'm' ? "��" : "��") << "\t";
	cout << phone << endl;
}

void Member::Println(){
	cout << "��ȣ : " << number << "\t";
	cout << "�̸� : "<< name << "\t";
	cout << "���� : "<< (gender == 'm' ? "��" : "��") << "\t";
	cout << "��ȭ��ȣ" << phone << endl;
}
