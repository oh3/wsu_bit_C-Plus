//01_���.cpp

/*
-- ���� ������� �ϴ� ��ü�� �м��� ���Ҵ��� ����κ��� �ִ�.
������ : �Ҹ�������()
����� : �Ҹ�������()
*/

#include <iostream>
using namespace std;

//step1 ĸ��ȭ �������� Ŭ���� ������ ���
/* 
class Dog {
public:
	void Sound() {
		cout << "�۸�" << endl;
	}
};

class Cat {
public:
	void Sound() {
		cout << "�߿�" << endl;
	}

};

int main(){

	return 0;
}
*/

//step2 : ��� ������ ������ ���
//�ڽĵ��� ���� �κ��� �θ𿡰� ����

class Animal {
public:
	void Sound() {
		cout << " ??? " << endl;
	}
};

// Animal ��� ����
class Dog :public Animal{
public:
	//�������̵�
	void Sound() {
		cout << " �۸� " << endl;
	}
};
// Animal ��� ����
class Cat :public Animal {
public:
	//�������̵�
	void Sound() {
		cout << " �߿� " << endl;
	}
};

int main() {

	Dog dog;				
	dog.Sound();

	Cat cat;					
	dog.Sound();

	//��� : �θ𿡰� �������� ??? �ۿ� ��¸���

	return 0;
}
