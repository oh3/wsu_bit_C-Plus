//01_�⺻�����.cpp

/*
cout << "Hello World" << endl;


1) cout : ��� ��ü(�ܼ�ȭ�鿡 ����� �����ϴ� ����)
2)  <<  : ��� ������(��� ��ü�� �̿��Ͽ�  ȭ�鿡 ������ ����Ҷ� ���Ǵ� ������)
3) endl : "\n" + fflush(stdout) 2���� ����� �����ϴ� �Լ�

�Է°�ü : cin,	�Է¿����� : >> 

*/

#include <iostream>
using namespace std;

int main() {

	char name[20];
	int age;
	char gender;
	float weight;

	//����� �Է��� ���� �ʰ�ȭ
	cout << "�̸� : "; 			cin >> name;
	cout << "���� : ";			cin >> age;
	cout << "����(m/f)";		cin >> gender;
	cout << " ������ : ";		cin >> weight;

	//���
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << endl;
	cout << "���� : " << gender << endl;
	cout << "������" << weight << endl;
	
	return 0;
}

#include <iostream>

namespace aaa {

	void foo() { cout << "aaa::foo()" << endl; }

}

int main() {

	aaa::foo();

	foo();

	return 0;

}
