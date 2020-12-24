//09_HAS_A.cpp
#include <iostream>
using namespace std;
/*
[Ŭ������ Ŭ������ ����]
1) has a == ���� ( ���� ���� ����)
2) is == a ���
----------------------------------------------
����� ���� �����Ѵ�. [��ü : ���, ��]
�л��� ���� ������ �ִ�. [��ü : �л�, ��]

1. �Ͻ����� ��������
�л��� ���� �����ϰ��ִ�.[ ��ü : �л�, �� ]

*/

//�� Ŭ���� ���� ==> �߻�ȭ <> ����ȭ (���� ���̴� ����  �Ȱ��� �׸��°�)
class pen {

	//1. ��� ���� ����
private:
	char color[20];
	int width;

	//2. ������ & �Ҹ���
public:
	pen(const char* _color, int _width) {
		strcpy_s(color, sizeof(color), _color);
			width = _width;
	}
	//3. �޼���(��� �Լ�)
public:
	void Write(const char* msg) {
		cout << "[" << color << ":";
		cout << width << "]";
		cout << msg << endl;
	}

};
//�̸�
class student {
	char name[20];
	int number;
	pen* mypen;
	
public:
	student(const char* _name, int _number) {
		strcpy_s(name, sizeof(name), _name);
		number = _number;
		mypen = NULL;		//�����ϰ� ���� ���� ����
	}

public:
	void �������(pen *p) {

		mypen = p;		//���� ������ �Ͻ������� ����

	}
	void �۾�������(const char *msg) {
		if (mypen == NULL) //���� �����ϰ� ���� �ʴٸ�
			return;

		mypen->Write(msg);		//���� ������ ���� .. ���� ����� ����Ϸ���.
	}
	void �������´�() {
		mypen = NULL; // ���� ������ �����
	}
}
;

int main() {

	//��ü�� ����
	student stu("ȫ�浿", 111);
	pen redpen("����", 2);
	pen bluepen("�Ķ�", 1);
	pen green("���", 5);

	//�л��� �۾��� ����ʹ�.
	stu.�������(&redpen);
	stu.�۾�������("�۾��� ���� �ֽ��ϴ�.");
	stu.�������´�();

	stu.�۾�������("�ٽ� �۾��� ����");

	return 0;
}