//Member.h
#include <string.h>
#pragma once

class Member{
	

private:
	//멤버변수
	int number;		//회원번호
	char name[20];	//이름
	char gender;	//성별
	char phone[20];	//전화번호

public:
	Member(int _number, const char*_name, char _gender, const char*_phone);
	
	//멤버 변수의 외부 노출 기능의 함수 (get & set 메서드)
public:
	int GetNumber()					{ return number; }
	const char* GetName()			{ return name; }
	char GetGender()				{ return gender; }
	const char* GetPhone()			{ return phone; }
	//들어온 value에 대한 조건 검사(맴버 데이터의 안전성)
	void SetNumber(int value)		{ number = value; }
	void SetName(const char* value) { strcpy_s(name, sizeof(name), value); }
	void SetGender(char value)
	{
		if (gender == 'm' || gender == 'f')
			gender = value;
	}

public:
	void Print();
	void Println();
};


