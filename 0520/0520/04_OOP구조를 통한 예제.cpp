//OOP������ Ȱ���� ����
/*
����   : ����1, ����2, �����, ����(), ������()
����   : ����1, ����2, �����, ����(), ������()
����   : ����1, ����2, �����, ����(), ������()
������ : ����1, ����2, �����, ����(), ������()
--------------------------------------------------
���� ��ü�� ����κ��� ���� �θ�Ŭ������ ����
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
	//�ڽ��� �����ڿ����� �θ� ��� �������� �������־�� �Ѵ�.
	//����, �ƹ��� ó���� ������ �θ��� ���ھ��� �����ڰ� ȣ��ȴ�. 
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

//����
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
	cout << "���� ���� : ";			cin >> number;
	Cal** callist = new Cal * [number];
	//Cal*�� ������ �� �ִ� �����迭 
	//================================================

	//���� ���� ���
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

	//����� ����
	for (int i = 0; i < number; i++)
	{
		callist[i]->CalResult();
	}

	//������
	//for (int i = 0; i < number; i++)
	//{
	//	printf("[%03d] ", i+1);
	//	callist[i]->Print();
	//}

	//���� ������ ����ϰ� �ʹٸ�?
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