//control.cpp

#include <iostream>
using namespace std;
#include "Control.h"

Control::Control()
{
	for (int i = 0; i < DATAMAX; i++)
	{
		memlist[i] = NULL;
	}
}

void Control::SelectAll()
{
	cout << "ȸ����ȣ\t�̸�\t����\t��ȭ��ȣ" << endl;
	cout << "----------------------------------------------" << endl;
	for (int i = 0; i < DATAMAX; i++)
	{
		Member* mem = memlist[i];

		//�����Ͱ� ������ ���� ��� 
		if (mem != NULL)
			mem->Print();
	}
}

void Control::Insert()
{
	int idx;
	char name[20], phone[20];
	char gender;

	cout << "������ġ(0 ~ " << DATAMAX - 1 << ") : ";
	cin >> idx;
	cin.ignore();	//������ 1�� ���ڸ� ����
	if (idx < 0 || idx >= DATAMAX)
	{
		cout << "�߸��� �ε����� �Է��ϼ̽��ϴ�." << endl;
		return;
	}
	else
	{
		if (memlist[idx] != NULL)
		{
			cout << "�����Ͱ� �����մϴ�." << endl;
			return;
		}
	}

	cout << "�̸� : ";
	cin.getline(name, sizeof(name));	//C�ڵ��� gets_s�� ������ ���

	cout << "����(m or f) : ";
	cin >> gender;

	cin.ignore();	//������ 1�� ���ڸ� ����//getchar();

	cout << "��ȭ��ȣ : ";
	cin.getline(phone, sizeof(phone));

	//���ڿ��� ��������� ������ ���� �ٸ� ����� �ִ�. 
	Member* pmem = new Member(idx, name, gender, phone);

	memlist[idx] = pmem;

	printf("����Ǿ����ϴ�.\n");
}

void Control::Select()
{
	//�˻��� ȸ��ID�� �Է¹޴´�.
	int number;
	cout << "ȸ��ID �Է� : ";
	cin >> number;

	//�˻� �˰��� 
	int idx = NumberToIdx(number);
	if (idx == -1)
	{
		cout << "�����Ͱ� �����ϴ�." << endl;
		return;
	}

	cout << "[" << idx << "] �ε���" << endl;
	memlist[idx]->Println();
}

int Control::NumberToIdx(int number)
{
	for (int i = 0; i < DATAMAX; i++)
	{
		Member* mem = memlist[i];
		if (mem != NULL && mem->GetNumber() == number)
			return i;
	}
	return -1;
}

int Control::NameToIdx(const char* name)
{
	for (int i = 0; i < DATAMAX; i++)
	{
		Member* mem = memlist[i];
		if (mem != NULL && strcmp(mem->GetName(), name) == 0)
			return i;
	}
	return -1;
}