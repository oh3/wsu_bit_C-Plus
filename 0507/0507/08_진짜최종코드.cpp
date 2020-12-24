//08_��¥�����ڵ�
#include <iostream>
using namespace std;

class Student{
	//1. �ɹ� ������ �����Ѵ�.
private:
	char* name;
	int  number;
	char* subject;
	char gender;

	//2. ������ & �Ҹ��ڸ� �����Ѵ�.
public:
	Student(const char* _name, int _number, const char* _subj, char _gender){
		name = new char[strlen(_name) + 1];
		strcpy_s(name, strlen(_name) + 1, _name);
		number = _number;

		subject = new char[strlen(_subj) + 1];
		strcpy_s(subject, strlen(_subj) + 1, _subj);
		gender = _gender;
	}
	~Student(){
		delete[] name;
		delete[] subject;
	}

	//�ɹ� �Լ�
public:
	void Print(){
		cout << "�̸� : " << name << endl;
		cout << "�й� : " << number << endl;
		cout << "�а� : " << subject << endl;
		cout << "���� : " << gender << endl;
	}

};

int main(){
	//���ÿ� ��ü�� ����
	Student stu("ȫ�浿", 1111, "��ǻ��", 'm');
	stu.Print();

	//���� ��ü�� ����
	Student* pstu = new Student("ȫ���", 2222, "IT", 'f');
	pstu->Print();
	delete pstu;

	return 0;
}