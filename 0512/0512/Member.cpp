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

//함수선언부
void Member::Print(){
	cout << number << "\t";
	cout << name << "\t";
	cout << (gender == 'm' ? "남" : "여") << "\t";
	cout << phone << endl;
}

void Member::Println(){
	cout << "번호 : " << number << "\t";
	cout << "이름 : "<< name << "\t";
	cout << "성별 : "<< (gender == 'm' ? "남" : "여") << "\t";
	cout << "전화번호" << phone << endl;
}
