//��� �ɹ�
/*
����ɹ� : �ݵ�� �ݷ��ʱ�ȭ���� �ʱ�ȭ
����ɹ��Լ� : �ش� �Լ��������� ����� �ɺ������� ���� ������ �� ����.
					���� �������Լ��������� ��� ����Լ��� ȣ�⸸ �����ϴ�.
*/
#include <iostream>
using namespace std;

class Member {

	const int id;		//��� ���

	int testnumber;	//��� ����
public:
	Member(int _id) : id(_id) {

		testnumber = _id;
	}
public:
	void fun1() {
		//id = 10;					//error (���)
		testnumber = 10;		//�����Ӱ� ���� ������ �� �ִ�.
	}

public:
	void fun2() {

	}
	void fun3() const {

	}

	void constfun1(int temp) const {		//������ �Լ�

		temp++						//�������� ���� ok

		//testnumber++;			//error (������� ���� �Ұ�)
		
		fun2();						//(�Ϲݸ���Լ�)eeror
		fun3();						//(�������Լ�)ok

	}
};

int main(){

	Member member(10);
	member.constfun1(1);
	return 0;
}
