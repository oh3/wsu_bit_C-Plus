//05_��ӿ����������.cpp

//2. ������������ ����
/*

				�ڽ�����	�ڽ�����		�������
�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
private		:    ��	(�ڱ⸸ ����)
protected	:    ��			��		(�ڽĸ� ����)
public		:	 ��			��					��		(��� ����)
*/
#include <iostream>
using namespace std;

class Parent {						//�θ�, ��� Ŭ����

private:
	int num1;

protected:
	int num11;

public:
	void fun1() { cout << "fun1" << endl; }

};

class Child : public Parent {			//�ڽ�, �Ļ� Ŭ����

	int num2;

public:
	void fun2() {
//		num1;		//error �θ�� ���� �������� private �������
		num11;		//�θ�κ��� �������� protected ��� ����
		fun1();		//�θ�� ���� �������� public ��� ����

		cout << "fun2" << endl;
	
	}
};

int main(){

	return 0;
}