//03_������.cpp
/*
��ü ������ ��� ������ �ʱ�ȭ �ϱ� ���� ������ ���� Ư���� �Լ��̴�.

��ü ������ �ڵ����� ȣ��ȴ�.

*/
#include <iostream>
using namespace std;

/*
struct Sample {

private:
	int num1;
	int num2;
	int result;

public:
	void Add() { 
		result = num1 + num2;
	}
	void Sub() { 
		result = num1 - num2; 
	}
	void Print() { 
		cout << num1 << " + " << num2 << " = " << result; 
	}

};

int main() {

	//�������� �������� ������ ���ÿ� �ʱ�ȭ ������ ���̻�
	//��� �Ұ��� ��? �����Ͱ� �ܺο��� ���� �� �� ������ ���еǾ��� �����̴�.
	//���? ������ 

	//������ ���ÿ� �ʱ�ȭ ����
	Sample sam = {10, 20};

	//���� �� ������ ��� ���
	sam.Add();
	sam.Print();

	return 0;
}
*/

//�����ڴ� ��ü ������ �ڵ����� ȣ��ȴ�.
//�������� ������ ��ü �ʱ�ȭ.
//�����ڴ� ����Ÿ���� ����. �̸��� ����ü��� �����ؾ� �Ѵ�.  �Ű������� �����Ѵ�.
//- �����ε�(�̸��� ������ �Ű������� �ٸ�), �⺻�� 
struct Sample {

	int num1;
	int num2;
public:
	//������1
	Sample() {
		num1 = 0;
		num2 = 0;
		cout << "������()" << endl;
	}
	//������2 (sample �����ε�)
	Sample(int n1, int n2) {
		num1 = n1;
		num2 = n2;
		cout << "������(int,int)" << endl;
	}
	void Print(){
		cout << num1 << ", " << num2 << endl;
	}

};


int main() {
	
	Sample sam1;					//��ü ����

	Sample sam2(10, 20);		//��ü ����

	sam1.Print();
	sam2.Print();

	cout << sizeof(sam1) << endl;		// 8

	return 0;
}