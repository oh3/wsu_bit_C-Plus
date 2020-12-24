//control.cpp

#include <iostream>
using namespace std;
#include "Control.h"

Control::Control()
{
	for (int i = 0; i < DATAMAX; i++)
	{
		memlist[i] = NULL;
	}
}

void Control::SelectAll()
{
	cout << "회원번호\t이름\t성별\t전화번호" << endl;
	cout << "----------------------------------------------" << endl;
	for (int i = 0; i < DATAMAX; i++)
	{
		Member* mem = memlist[i];

		//데이터가 존재할 때만 출력 
		if (mem != NULL)
			mem->Print();
	}
}

void Control::Insert()
{
	int idx;
	char name[20], phone[20];
	char gender;

	cout << "저장위치(0 ~ " << DATAMAX - 1 << ") : ";
	cin >> idx;
	cin.ignore();	//버퍼의 1나 문자를 제거
	if (idx < 0 || idx >= DATAMAX)
	{
		cout << "잘못된 인덱스를 입력하셨습니다." << endl;
		return;
	}
	else
	{
		if (memlist[idx] != NULL)
		{
			cout << "데이터가 존재합니다." << endl;
			return;
		}
	}

	cout << "이름 : ";
	cin.getline(name, sizeof(name));	//C코드의 gets_s와 동일한 기능

	cout << "성별(m or f) : ";
	cin >> gender;

	cin.ignore();	//버퍼의 1나 문자를 제거//getchar();

	cout << "전화번호 : ";
	cin.getline(phone, sizeof(phone));

	//문자열을 저장공간에 대입할 때는 다른 방법이 있다. 
	Member* pmem = new Member(idx, name, gender, phone);

	memlist[idx] = pmem;

	printf("저장되었습니다.\n");
}

void Control::Select()
{
	//검색할 회원ID를 입력받는다.
	int number;
	cout << "회원ID 입력 : ";
	cin >> number;

	//검색 알고리즘 
	int idx = NumberToIdx(number);
	if (idx == -1)
	{
		cout << "데이터가 없습니다." << endl;
		return;
	}

	cout << "[" << idx << "] 인덱스" << endl;
	memlist[idx]->Println();
}

int Control::NumberToIdx(int number)
{
	for (int i = 0; i < DATAMAX; i++)
	{
		Member* mem = memlist[i];
		if (mem != NULL && mem->GetNumber() == number)
			return i;
	}
	return -1;
}

int Control::NameToIdx(const char* name)
{
	for (int i = 0; i < DATAMAX; i++)
	{
		Member* mem = memlist[i];
		if (mem != NULL && strcmp(mem->GetName(), name) == 0)
			return i;
	}
	return -1;
}