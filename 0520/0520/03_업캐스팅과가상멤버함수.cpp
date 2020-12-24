//03_��ĳ���ð� �������Լ�.cpp
/*
���� �ټ��� ������, ����� ��ü�� �����ؼ� �����ϰ� �Ѵٸ�?
Dog dog[5], Cat cat[5];
�߰��� ������ ������ �þ�ٸ�?
-> ������ �迭�� ������ �����ɰ��̴�.
������ ��ĳ������ ����Ѵٸ� �ϳ��� �迭�� �ذ��� �����ϴ�.
Animal ani[100]
*/
#include <iostream>
using namespace std;

class Animal{
public:
	//�������Լ�
	//�ڽ��� ���� �����ǰ� �ɸ��� �Լ��� ������� �Լ��� �����.
	//�θ��� �����ͷ� �ش� �޼��带 ȣ���ϸ� �ڽ��� ������ �� �޼��尡
	// ȣ��ȴ�.
	virtual void Sound() { cout << "????????????????" << endl; }
};

class Dog : public Animal{
public:
	void Sound() { cout << "�۸�~~~" << endl; }
};

class Cat : public Animal{
public:
	//�������̵�(�ɹ��Լ��� ������)
	void Sound() { cout << "�߿˾߿�~~~" << endl; }
};

int main(){

	//��ĳ������ �̿��� ���� ����
	Animal* woori[4];		//4���� ��ü�� �ּҸ� ������ �� �ִ� �迭����
	woori[0] = new Dog;
	woori[1] = new Cat;
	woori[2] = new Cat;
	woori[3] = new Cat;

	//��絿�� �Ҹ��� ������ ��ü�� �̿��ؼ� ȣ��
	//��¿���� ���Ҹ�, ��¿���� ����� �Ҹ� ����.
	//�̸� �������̶� �Ѵ�.
	for (int i = 0; i < 4; i++) {
		woori[i]->Sound();	
	}

	return 0;
}
