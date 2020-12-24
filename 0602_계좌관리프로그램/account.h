//account.h
#pragma once

#include "wbglobal.h"
#include <time.h>
//https://blog.naver.com/rbcjf1214/221518615553
class Account
{
	const int accnumber;	//��� ��� ����
	char name[20];	
	int  balance;			//�ܾ�
	tm tmc;					//������

public:
	Account(int _num, const char* _name) 
		: accnumber(_num)
	{
		strcpy_s(name, sizeof(name), _name);
		balance = 0;
		//���»����� �� ���� �Ͻø� ����
		time_t t = time(0); //#include <time.h>
		localtime_s(&tmc, &t);
	}

	Account(int _num, const char* _name, int _balance, int y,int m,int d)
		: accnumber(_num)
	{
		strcpy_s(name, sizeof(name), _name);
		balance = _balance;

		//���»����� �� ���޵� �Ͻø� ��� 
		tmc.tm_year = y - 1900;
		tmc.tm_mon = m - 1;
		tmc.tm_mday = d;
	}

	//Get �޼��� 
public:
	int GetNumber() const		{ return accnumber; }
	const char* GetName() const { return name;		}
	int GetBalance() const		{ return balance;	}
	tm  GetTm() const			{ return tmc;		}
	//Set �޼��� 
	void SetName(const char* value)
	{
		strcpy_s(name, sizeof(name), value);
	}

public:
	//�Ա� & ���
	void InputMoney(int money)
	{
		if (money <= 0)
			throw "�߸��� �Աݾ��Դϴ�.";
		balance += money;
	}

	void OutputMoney(int money) 
	{
		if (money <= 0)
			throw "�߸��� �Աݾ��Դϴ�.";
		if (money > balance)
			throw "�ܾ��� �����մϴ�.";

		balance -= money;
	}

	friend ostream& operator<<(ostream& os, Account* acc)
	{
		os << "���¹�ȣ:" << acc->accnumber << " �̸�:" << acc->name;
		os << " �ܾ�:" << acc->balance <<"��";

		char str[80];
		strftime(str, sizeof(str), "%y-%m-%d %H:%M:%S", &acc->tmc);
		os << " �����Ͻ�:" << str;
		return os;
	}
};


class CompareByAccNumber	//���� ��� number
{
	int accnum;
public:
	//���� ���� �����ڸ� ���� ���޹޾� �ɹ������� ����
	CompareByAccNumber(int _number) : accnum(_number) {}

	//find_if���� �ݺ������� ȣ��Ǵ� �κ�
	//vector<Account*> �� ������� �ֱ� ������ �̶� ���޵Ǵ� Ÿ����
	bool operator()(Account* value)
	{
		return (value->GetNumber() == accnum);
	}
};

class CompareByAccName	//���� ��� name
{
	char name[20];
public:
	//���� ���� �����ڸ� ���� ���޹޾� �ɹ������� ����
	CompareByAccName(const char* _name)
	{
		strcpy_s(name, sizeof(name), _name);
	}

	//find_if���� �ݺ������� ȣ��Ǵ� �κ�
	//vector<Account*> �� ������� �ֱ� ������ �̶� ���޵Ǵ� Ÿ����
	//�Լ���ü.....
	bool operator()(Account* value)
	{
		return ( strcmp(value->GetName(), name) == 0);
	}
};

/*
[�Լ���ü]
��ü�� �Լ�ó�� ���
CompareByAccName n1;

n1(10);	//��ü�ε� �Լ��� ȣ�ⰳ������ ���ǰ� �ִ�. 
		//n1.operator()(10);

find_if(begin, end, n1)
{
	for(;  begin != end; begin++)
	{
		if( n1(*begin))	//<=================
			return begin;
	}
	return end;
}
*/
