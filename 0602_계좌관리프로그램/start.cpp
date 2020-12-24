//start.cpp

#include <iostream>
using namespace std;
#include "accmanager.h"

void exam1()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
		v1.push_back(i + 1);

	//itr을 역참조하면 정수값이다. 이유는:vector<int>
	vector<int>::iterator itr = find(v1.begin(), v1.end(), 5);
	cout << "결과값 : " << *itr << endl; 

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

	//itr을 역참조하면 정수값이다. 이유는:vector<int>
	CompareByIntP cbi(5);
	vector<int*>::iterator itr = find_if(v1.begin(), v1.end(), cbi);
	cout << "결과값 : " << **itr << endl;

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


class CompareByNumber	//비교의 대상 number
{
	int number;
public:
	//비교할 값을 생성자를 통해 전달받아 맴버변수에 저장
	CompareByNumber(int _number) : number(_number) {}

	//find_if에서 반복적으로 호출되는 부분
	//vector<Data*> 로 만들어져 있기 때문에 이때 전달되는 타입은
	//Data*
	bool operator()(Data* value)
	{
		return (value->GetNumber() == number);
	}
};

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
	//vector<Data*> 로 만들어져 있기 때문에 이때 전달되는 타입은
	//Data*
	bool operator()(Data* value)
	{
		return ( strcmp(value->GetName(), name) == 0);
	}
};

void exam3()
{
	vector<Data*> v1;

	Data* d1 = new Data(10, "홍길동");
	v1.push_back(d1);

	v1.push_back(new Data(20, "김길동"));
	v1.push_back(new Data(30, "허길동"));


	//itr을 역참조하면 정수값이다. 이유는:vector<int>
//	CompareByNumber cbi(30);
//	vector<Data*>::iterator itr = find_if(v1.begin(), v1.end(), cbi);

	CompareByName cbi("허길동");
	vector<Data*>::iterator itr = find_if(v1.begin(), v1.end(), cbi);
	cout << "결과값 : ";
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