//start.cpp

#include <iostream>
using namespace std;
#include "accmanager.h"

void exam1()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
		v1.push_back(i + 1);

	//itr�� �������ϸ� �������̴�. ������:vector<int>
	vector<int>::iterator itr = find(v1.begin(), v1.end(), 5);
	cout << "����� : " << *itr << endl; 

	for (int i = 0; i < (int)v1.size(); i++)
	{
		int value = v1[i];
		cout << value << ",";
	}
	cout << endl; 
}

class CompareByIntP
{
	int number;
public:
	CompareByIntP(int _number) : number(_number) {}
	
	bool operator()(int* value)
	{
		return (*value == number);
	}
};

void exam2()
{
	vector<int*> v1;
	for (int i = 0; i < 10; i++)
	{
		int* value = new int(i + 1);
		v1.push_back(value);
	}

	//itr�� �������ϸ� �������̴�. ������:vector<int>
	CompareByIntP cbi(5);
	vector<int*>::iterator itr = find_if(v1.begin(), v1.end(), cbi);
	cout << "����� : " << **itr << endl;

	for (int i = 0; i < (int)v1.size(); i++)
	{
		int value = *(v1[i]);
		cout << value << ",";
	}
	cout << endl;
}

class Data
{
	int number;
	char name[20];
public:
	Data(int n, const char* _name) : number(n)
	{
		strcpy_s(name, sizeof(name), _name);
	}

	int GetNumber() const		{ return number;	}
	const char* GetName() const { return name;		}

	void print() const
	{
		cout << name << "," << number << endl;
	}
};


class CompareByNumber	//���� ��� number
{
	int number;
public:
	//���� ���� �����ڸ� ���� ���޹޾� �ɹ������� ����
	CompareByNumber(int _number) : number(_number) {}

	//find_if���� �ݺ������� ȣ��Ǵ� �κ�
	//vector<Data*> �� ������� �ֱ� ������ �̶� ���޵Ǵ� Ÿ����
	//Data*
	bool operator()(Data* value)
	{
		return (value->GetNumber() == number);
	}
};

class CompareByName	//���� ��� name
{
	char name[20];
public:
	//���� ���� �����ڸ� ���� ���޹޾� �ɹ������� ����
	CompareByName(const char* _name)
	{
		strcpy_s(name, sizeof(name), _name);
	}

	//find_if���� �ݺ������� ȣ��Ǵ� �κ�
	//vector<Data*> �� ������� �ֱ� ������ �̶� ���޵Ǵ� Ÿ����
	//Data*
	bool operator()(Data* value)
	{
		return ( strcmp(value->GetName(), name) == 0);
	}
};

void exam3()
{
	vector<Data*> v1;

	Data* d1 = new Data(10, "ȫ�浿");
	v1.push_back(d1);

	v1.push_back(new Data(20, "��浿"));
	v1.push_back(new Data(30, "��浿"));


	//itr�� �������ϸ� �������̴�. ������:vector<int>
//	CompareByNumber cbi(30);
//	vector<Data*>::iterator itr = find_if(v1.begin(), v1.end(), cbi);

	CompareByName cbi("��浿");
	vector<Data*>::iterator itr = find_if(v1.begin(), v1.end(), cbi);
	cout << "����� : ";
	Data* cur = *itr;
	cur->print();

	for (int i = 0; i < (int)v1.size(); i++)
	{
		Data *value = v1[i];
		value->print();
	}
}

int main()
{
//	exam3();
	accManager* sm = new accManager();
	sm->Run();
	delete sm;

	return 0;
}