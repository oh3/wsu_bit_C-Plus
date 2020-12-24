/************************************************************
  01. �Ʒ� �ڵ尡 ����� �� �ִ� Ŭ���� ���� 
      Human Ŭ���� : �̸��� ������ �ִ�.
      StudentŬ���� : Human�� ��ӹ޴´�. 
                            �й��� ������ �ִ�.
*************************************************************/
#include <iostream>
using namespace std;

//Human Ŭ����
class Human {
	
//�������
public:
	char name[20];

//Human Ŭ������ ������
public:
	Human() {

	}

	Human(const char* _name) {
		strcpy_s(name, sizeof(name), _name);
	}

//���
public:
	void Intro() {
		cout << name << endl;
	}
};


class Student : public Human {
public:
	char name[20]; //�̸�
	int number; // �й�

public:
	Student(const char* _name, int _number) {
		strcpy_s(name, sizeof(name), _name);
		number = _number;
	}

public:
	void Intro() {
		cout << name << "\t";
		cout << number << endl;
	}
};

//����
int main() {

	Human H("����");
	Student S("���л�", 1234567);

	Human* pH;
	Student* pS;

	pH = &H;
	pS = &S;

	pH->Intro();		// ���� ���� ���
	pS->Intro();		// ���� ���� ���

	return 0;
}