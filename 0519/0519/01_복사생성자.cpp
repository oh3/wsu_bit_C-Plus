//01_���������.cpp
/*
�ڽŰ� ������ ��ü�� �̿��� ������ �� ȣ��Ǵ� Ư���� ������ ������
Ư���� ������ ������
- �ٸ� �����ڿʹ� �޸� �����Ϸ��� �⺻������ �������ִ� ������
- ���� ���޵� ��ü�� ������ �����ؼ� ���ο� ��ü�� �������ִ¿����� ����
*/
#include <iostream>
using namespace std;

class Sample {

	//string name;
	char name[20];
	int age;

public:
	Sample(const char* _name, int _age){
		strcpy_s(name, sizeof(name), _name);
		age = _age;
		cout << "Sample" << endl;
	}

	//���� ��������ڸ� ������� �ִ�.
	Sample(const Sample& sam) {

		cout << "���������" << endl;
		//strcpy_s(name, sizeof(name), sam.name);
		//age= sam.age;

		// < - > ���� �������

		*this = sam;		//����ü �������� ���Կ��� �����ϴ�.
								//this�� �ڱ� �ڽ��� �ּҰ��� ���� �ִ� ������
	}

	~Sample() { cout << "~Sample " << endl; }


public:
	void Print() const { // �������Լ�(���ο��� ��������� �������� �ʰٴ�)
		cout << name << ", " << age << endl;
	}




};



int main() {

	Sample sam1("ȫ�浿",10);
	Sample sam2(sam1);			//sam2�� ������ �� ���� � �����ڸ� ȣ���������?[���������]

	sam1.Print();
	sam2.Print();

	return 0;
}