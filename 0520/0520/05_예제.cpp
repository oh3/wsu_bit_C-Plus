//05_����.cpp
/*
[�߻�ȭ ���� : �������, ����Լ��� �����ϴ� ����]
�Ϲݰ��� : ���¹�ȣ, �̸�, �ܾ�					//�Ա�(),���(),�������(),
�ſ���� : ���¹�ȣ, �̸�, �ܾ�					//�Ա�(),���(),�������()
��ΰ��� : ���¹�ȣ, �̸�, �ܾ�, ��α��Ѿ�//�Ա�(),���(),�������(),

-�Ϲݰ��¿� �Ա��� ���� �Աݾ��� �״�� �ܾ׿� �߰��Ѵ�.
	�Ա�(1000) -> �ܾ� = �ܾ� + 1000
-�ſ���¿� �Ա��� ���� �Աݾ��� 1%�� ���ڷ� �߰� �����Ѵ�.
	�Ա�(1000) -> �ܾ� = �ܾ� 1000 + (1000*0.01)
-��ΰ��¿� �Ա��� ���� �Աݾ��� 1%�� ��α����� �����Ѵ�.
	�Ա�(1000) -> �ܾ� = �ܾ� 1000 - (1000*0.01)
					-->��α��Ѿ� = ��α��Ѿ� + (1000*0.01)
*/
#include <iostream>
using namespace std;
#include <Windows.h>
#include <conio.h>
#include <time.h>

using namespace std;

//�Ϲݰ��� Ŭ����
class Account {
//�������
private:
	int accid;
	char name[20];
	int balance;
//������ (��ü�ʱ�ȭ����)
public:
	Account(int _accid, const char* _name) {
		//��������� �ʱ�ȭ����
		accid = _accid;
		strcpy_s(name, sizeof(name), _name);
		balance = 0;
	}
	Account(int _accid, const char* _name, int _balance) {
		accid = _accid;
		strcpy_s(name, sizeof(name), _name);
		balance = _balance;
	}
public:
	//�Ա�
	virtual bool InputMoney(int money) {
		//���� 0���� ���� ��
		if (money < 0){
			return false;
		}
		balance = balance + money;
		return true;
	}
	//���
	int  OutputMoney(int money) {
		//���� 0���� ���� �� false
		if (money < 0) {
			return -1;
		}
		//�ܾ׺��� ��ݾ��� �� ������� false
		if (money > balance)
			return -2;

		balance = balance - money;
		return 1;
		//���ϰ��� 1 : ����ó��
		//���ϰ��� 2 : ���� ( "����~" ) 
		//���ϰ��� 3 : ���� ( "����~") 
	}
	//�������
	virtual void PrintData() const {
		cout << "[���¹�ȣ] " << accid << "\t";
		cout << "[�̸�]" << name << "\t";
		cout << "[�ܾ�]" << balance << "��" << "\t";
	}
};

//�ſ���� Ŭ����	-- �Ϲݰ��� ��ӹ���
class FaithAccount : public Account {

	//������
public:			//  �ݷ��ʱ�ȭ : Account(_accid, _name)
	FaithAccount(int _accid, const char* _name) : Account(_accid, _name) {

	}
	FaithAccount(int _accid, const char* _name, int _balance) : Account(_accid, _name, (int)(_balance + _balance * 0.01)){

		}
public:
	//�������̵�
	bool InputMoney(int money) {
		////�Ա�(1000) -> �ܾ� = �ܾ� 1000 + (1000*0.01)
		return Account::InputMoney((int)(money + money * 0.01));

	}
};

//��ΰ��� Ŭ����		-- �Ϲݰ��� ��ӹ���
class ContriAccount : public Account {

//�������
private:
	int contribution;

//������	
public:															//�ݷ��ʱ�ȭ
	ContriAccount(int _accid, const char* _name) : Account(_accid, _name){
		contribution = 0;
	}
	ContriAccount(int _accid, const char* _name, int _balance)
		: Account(_accid, _name, (int)(_balance - _balance * 0.01)){

		contribution = (int)(_balance * 0.01);
	}

public:
	//�������̵�
	bool InputMoney(int money){
		if (Account::InputMoney((int)(money - money * 0.01)) == false)
			return false;

		contribution = contribution + (int)(money * 0.01);
		return true;
	}

public:
	virtual void PrintData() const {
	//�θ��� �޼��带 ����
	Account:: PrintData();
		cout << "[��α��Ѿ�]" << contribution << "��" << "\t";
	}
};

int main() {

	//�ʱ�ȭ
	//================ init =====================================
	srand((unsigned int)time_t(NULL));

	Account* acclist[3];
	acclist[0] = new Account(1111, "ȫ�Ϲ�");
	acclist[1] = new FaithAccount(2222, "�̽ſ�");
	acclist[2] = new ContriAccount(333, "�ֱ��");

	cout << "�ùķ��̼��� �����մϴ�. �ƹ�Ű�� ��������";
	_getch();   //#include <conio.h>
	//���
	//================= run ====================================
	while (true){
		system("cls");

		//���� �����ϰ� ���� & ����ݱݾ�
		int io = rand() % 10;       //0~9
		int money = ((rand() % 9) + 1) * 10000; //10000~90000

		//��/��¿���(��� ���¿� ����)
		if (io >= 4)        //( 4 or 8) �Ա�
		{
			cout << "[�Ա�] " << money << "��" << endl;
			for (int i = 0; i < 3; i++)
			{
				acclist[i]->InputMoney(money);
			}
		}
		else                //���
		{
			cout << "[���] " << money << "��" << endl;
			for (int i = 0; i < 3; i++)
			{
				acclist[i]->OutputMoney(money);
			}
		}

		//������
		for (int i = 0; i < 3; i++)
		{
			acclist[i]->PrintData();    cout << endl;
		}

		Sleep(500); //0.5�� ���߱�      #include <Windows.h>
	}
}