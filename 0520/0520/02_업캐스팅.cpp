//02_��ĳ����.cpp
/*
[����ȯ]  : �θ�� �ڽİ��� �� ��ȯ ����
��, �ּҰ��� ���� ������.		(�� X)

UP casting : �ڽ� --> �θ𿡰� ���� , �������� ����ȯ
Down casting �θ� --> �ڽĿ��� ����
*/

#include <iostream>
using namespace std;


class Animal {
public:
	void Sound() {
		cout << " ??? " << endl;
	}
	void �Դ´�() {
		cout << " �Դ´� " << endl;
	}
};


class Dog :public Animal {
public:
	//�������̵� ����Լ��� ������
	void Sound() {
		cout << " �۸� " << endl;		
	}
	void ����() {
		cout << "����" << endl;		
	}
};

class Cat :public Animal {
public:
	//�������̵� ����Լ��� ������
	void Sound() {
		cout << " �߿� " << endl;				//������
	}
	void ���鳻�б�() {
		cout << "���鳻�б�" << endl;		//�߰� Ȯ��
	}
};

int main() {

	//========================================
	Dog dog;
	dog.Sound();	
	dog.����();
	dog.�Դ´�();

	Cat cat;
	cat.Sound();
	cat.���鳻�б�();
	cat.�Դ´�();
	//========================================
	
	//��ĳ����
	//�����Ϸ����忡���� �����˻��� ��
	//ani2�� Ÿ���� Animal* �� �����Ѵ�.
	//���������ȰŴ� �������� ���������� 
	Animal* ani2 = &dog;
	
	//=========================================
	//�ٿ�ĳ������ �����ؾ��� ����ȯ
	//�������� ����ȯ�� �ϱ� ������ ���� �ڽ�Ÿ���� ����ǵ� ������ ���� ����.
	//�ݵ�� �ڽ��� Ÿ������ ����ȯ �ϴ� ��츸 ����Ѵ�.
	Cat* pCat = (Cat*)ani2;
	pCat->���鳻�б�();


	//��ĳ����
	Animal* ani = new Dog;
	Animal* an1 = new Cat;

	return 0;
}