//02_�������������.cpp
/*
�ʿ信 ���ؼ� ����� �ܺη� ���� �� ���� ��ų �� �ִ�.
public : �ܺο��� ������ ����ϴ� ������

protected :

private : �ܺο��� ������ ���� �ϴ� ������
*/


#include <iostream>
using namespace std;

/*
//����ü�� �⺻ ���� �����ڰ� public�̴�.
struct Sample{

	int num;

	void foo(){}
	void woo(){}
	
};

//������������� ����
struct Sample1 {

private:
	int num;

public:
	void foo() {}
	void woo() {}

private:
	void hoo() {}
	void zoo() {}

};

int main() {

	Sample sam1;
	
	//�ܺο��� ������ ����ϴ� ����
	sam1.num;
	sam1.foo();
	sam1.woo();

//====================================
	Sample1 sam2;

	//sam2.num; ��������� ������ �ȵ�.
	sam2.foo();
	sam2.woo();


	return 0;
}
*/

//������ ����

//1.Sample�̶�� �̸��� ����ü�� ����
struct Sample {

	//2. int num1 ������� �߰��ϰ�, �� �ܺ����� ���Ұ�����.
private:
	int num1;

	//3. void test1() ����Լ��� �߰��ϰ�, �ܺ����� ��� �Ұ�
private:
	void test1() {
	
	}

	//4. void test2() ����Լ��� �߰��ϰ�, �ܺ������� ��� ����
public:
	void test2() {
	
	}
};

int main() {

	//Sample ����ü�����ͼ� �̸�����.
	Sample sam1;

	//������
	sam1.test2();
}