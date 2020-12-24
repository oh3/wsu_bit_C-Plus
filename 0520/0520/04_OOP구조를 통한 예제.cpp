//OOP구조를 활용한 예제
/*
덧셈   : 정수1, 정수2, 결과값, 연산(), 결과출력()
뺄셈   : 정수1, 정수2, 결과값, 연산(), 결과출력()
곱셈   : 정수1, 정수2, 결과값, 연산(), 결과출력()
나눗셈 : 정수1, 정수2, 결과값, 연산(), 결과출력()
--------------------------------------------------
만들 객체의 공통부분을 갖는 부모클래스를 생성
*/
#include <iostream>
using namespace std;

class Cal
{
private:
	int num1;
	int num2;
	float result;

public:
	Cal()
	{
		num1 = num2 = 0;
		result = 0.0f;
	}
	Cal(int _num1, int _num2)
	{
		num1 = _num1;
		num2 = _num2;
		result = 0.0f;
	}

public:
	int getNum1() const { return num1; }
	int getNum2() const { return num2; }
	float getResult() const { return result; }
	void setResult(float value) { result = value; }

public:
	virtual void CalResult() {}
	virtual void Print() const {}  //10 + 20 = 30 
};

class Add : public Cal
{
public:
	//자식의 생성자에서는 부모를 어떻게 생성할지 결정해주어야 한다.
	//만약, 아무런 처리가 없으면 부모의 인자없는 생성자가 호출된다. 
	Add() {}
	Add(int num1, int num2) : Cal(num1, num2) {}

public:
	void CalResult() { setResult((float)getNum1() + getNum2()); }
	void Print() const
	{
		cout << getNum1() << " + ";
		cout << getNum2() << " = ";
		cout << getResult() << endl;
	}
};

//뺄셈
class Sub : public Cal
{
public:
	Sub() {}
	Sub(int num1, int num2) : Cal(num1, num2) {}

public:
	void CalResult() { setResult((float)getNum1() - getNum2()); }
	void Print() const
	{
		cout << getNum1() << " - ";
		cout << getNum2() << " = ";
		cout << getResult() << endl;
	}
};


int main()
{
	//================ init ========================
	srand((unsigned int)time_t(NULL));

	int number;
	cout << "문제 개수 : ";			cin >> number;
	Cal** callist = new Cal * [number];
	//Cal*를 저장할 수 있는 동적배열 
	//================================================

	//문제 생성 기능
	for (int i = 0; i < number; i++)
	{
		int idx = rand() % 2; //0~1
		int num1 = (rand() % 9) + 1;  // 1~9
		int num2 = (rand() % 9) + 1;  // 1~9

		if (idx == 0)
			callist[i] = new Add(num1, num2);
		else
			callist[i] = new Sub(num1, num2);
	}

	//결과값 생성
	for (int i = 0; i < number; i++)
	{
		callist[i]->CalResult();
	}

	//결과출력
	//for (int i = 0; i < number; i++)
	//{
	//	printf("[%03d] ", i+1);
	//	callist[i]->Print();
	//}

	//만약 덧셈만 출력하고 싶다면?
	//RTTI(Runtime Type Infomation)
	for (int i = 0; i < number; i++)
	{
		Sub* add = dynamic_cast<Sub*>(callist[i]);
		if (add != NULL)
		{
			printf("[%03d] ", i + 1);
			callist[i]->Print();
		}
	}


	//============== exit =============================
	delete[] callist;
	//===================================================

	return 0;
}